#include "mat.h"
#include <math.h>
#include <stdio.h>

void msqglm_mat4_transpose(msqglm_mat4 m, msqglm_mat4* dest)
{
    int j;
    for(int i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            (*dest)[i][j] = m[j][i];
}

void msqglm_mat4_mul_k(msqglm_mat4 m, float k, msqglm_mat4* dest)
{
    msqglm_vec4_mul(m[0], k, &((*dest)[0]));
    msqglm_vec4_mul(m[1], k, &((*dest)[1]));
    msqglm_vec4_mul(m[2], k, &((*dest)[2]));
    msqglm_vec4_mul(m[3], k, &((*dest)[3]));
}

void msqglm_mat4_add(msqglm_mat4 a, msqglm_mat4 b, msqglm_mat4* dest)
{
    msqglm_vec4_add(a[0], b[0], &((*dest)[0]));
    msqglm_vec4_add(a[1], b[1], &((*dest)[1]));
    msqglm_vec4_add(a[2], b[2], &((*dest)[2]));
    msqglm_vec4_add(a[3], b[3], &((*dest)[3]));
}

void msqglm_mat4_sub(msqglm_mat4 a, msqglm_mat4 b, msqglm_mat4* dest)
{
    msqglm_vec4_sub(a[0], b[0], &((*dest)[0]));
    msqglm_vec4_sub(a[1], b[1], &((*dest)[1]));
    msqglm_vec4_sub(a[2], b[2], &((*dest)[2]));
    msqglm_vec4_sub(a[3], b[3], &((*dest)[3]));
}

void msqglm_mat4_mul(msqglm_mat4 a, msqglm_mat4 b, msqglm_mat4* dest)
{
    msqglm_mat4 m;
    msqglm_mat4_transpose(b, &m); 
    int j;
    for(int i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            (*dest)[i][j] = msqglm_vec4_dot(a[i], m[j]);   
}

void msqglm_mat4_sprint(char* string, msqglm_mat4 m)
{
    char str_vec1[40]; 
    char str_vec2[40]; 
    char str_vec3[40]; 
    char str_vec4[40]; 
    msqglm_vec4_sprint(str_vec1, m[0]);
    msqglm_vec4_sprint(str_vec2, m[1]);
    msqglm_vec4_sprint(str_vec3, m[2]);
    msqglm_vec4_sprint(str_vec4, m[3]);
    sprintf(string, "mat4 {\n\t%s,\t%s,\t%s,\t%s\n}\n",str_vec1,str_vec2,str_vec3,str_vec4);
}

void msqglm_mat4_empty(msqglm_mat4* dest)
{
    int j;
    for(int i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            (*dest)[i][j] = 0; 
}

void msqglm_mat4_identity(msqglm_mat4* dest)
{
    msqglm_mat4_scaling((msqglm_vec3){1.f,1.f,1.f}, dest);
}

void msqglm_mat4_translation(msqglm_vec3 translation, msqglm_mat4* dest)
{
    msqglm_mat4_identity(dest);
    (*dest)[0][3] = translation[0];
    (*dest)[1][3] = translation[1];
    (*dest)[2][3] = translation[2];
}

void msqglm_mat4_scaling(msqglm_vec3 scaling, msqglm_mat4* dest)
{
    msqglm_mat4_empty(dest);
    (*dest)[0][0] = scaling[0];
    (*dest)[1][1] = scaling[1];
    (*dest)[2][2] = scaling[2];
    (*dest)[3][3] = 1;
}

void msqglm_mat4_rotation(msqglm_vec3 rotation, msqglm_mat4* dest)
{
    msqglm_mat4 tmp;
    msqglm_mat4_rotation_x_axis(rotation[0], dest);
    msqglm_mat4_rotation_y_axis(rotation[1], &tmp); 
    msqglm_mat4_mul(*dest, tmp, dest);
    msqglm_mat4_rotation_z_axis(rotation[2], &tmp);
    msqglm_mat4_mul(*dest, tmp, dest);
}


void msqglm_mat4_rotation_x_axis(float rad, msqglm_mat4* dest)
{
    msqglm_mat4_scaling((msqglm_vec3){1.f, cos(rad), cos(rad)}, dest);
    (*dest)[1][2] = -sin(rad);
    (*dest)[2][1] = sin(rad);
}

void msqglm_mat4_rotation_y_axis(float rad, msqglm_mat4* dest)
{
    msqglm_mat4_scaling((msqglm_vec3){cos(rad), 1, cos(rad)}, dest);
    (*dest)[0][2] = sin(rad);
    (*dest)[2][0] = -sin(rad);
}

void msqglm_mat4_rotation_z_axis(float rad, msqglm_mat4* dest)
{
    msqglm_mat4_scaling((msqglm_vec3){cos(rad), cos(rad), 1}, dest);
    (*dest)[0][1] = -sin(rad);
    (*dest)[1][0] = sin(rad);
}

void msqglm_mat4_projection(float fov, float near_plane, float far_plane, msqglm_mat4* dest)
{
    float s = 1.f / tan(fov);
    msqglm_mat4_scaling((msqglm_vec3){s, s, -far_plane/(far_plane - near_plane)}, dest);
    (*dest)[2][3] = -1.f;
    (*dest)[3][2] = - (far_plane * near_plane) / (far_plane - near_plane);
}

void msqglm_mat4_ortho(msqglm_vec2 top_left, msqglm_vec2 bottom_right, 
                       float near_plane, float far_plane, msqglm_mat4* dest)
{
    msqglm_mat4_scaling((msqglm_vec3){
            (2.f/(bottom_right[0] - top_left[0])),
            (2.f/(top_left[1] - bottom_right[1])),
            (-2.f/(far_plane - near_plane))
            }, dest);
    (*dest)[3][0] = -(top_left[0] + bottom_right[0]) / (bottom_right[0] - top_left[0]); 
    (*dest)[3][1] = -(top_left[1] + bottom_right[1]) / (top_left[1] - bottom_right[1]);
    (*dest)[3][2] = -(far_plane + near_plane) / (far_plane - near_plane);
}
