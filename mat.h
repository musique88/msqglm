#include "vec.h"

typedef msqglm_vec4 msqglm_mat4[4];

void msqglm_mat4_transpose(msqglm_mat4 src, msqglm_mat4* dest);
void msqglm_mat4_mul_k(msqglm_mat4 src, float k, msqglm_mat4* dest);
void msqglm_mat4_add(msqglm_mat4 a, msqglm_mat4 b, msqglm_mat4* dest);
void msqglm_mat4_sub(msqglm_mat4 a, msqglm_mat4 b, msqglm_mat4* dest);
void msqglm_mat4_mul(msqglm_mat4 a, msqglm_mat4 b, msqglm_mat4* dest);

void msqglm_mat4_empty(msqglm_mat4* dest);
void msqglm_mat4_identity(msqglm_mat4* dest);
void msqglm_mat4_translation(msqglm_vec3 translation, msqglm_mat4* dest);
void msqglm_mat4_scaling(msqglm_vec3 scale, msqglm_mat4* dest);

// rotation in euler angles
void msqglm_mat4_rotation(msqglm_vec3 euler_angles, msqglm_mat4* dest);

void msqglm_mat4_rotation_x_axis(float rad, msqglm_mat4* dest);
void msqglm_mat4_rotation_y_axis(float rad, msqglm_mat4* dest);
void msqglm_mat4_rotation_z_axis(float rad, msqglm_mat4* dest);

void msqglm_mat4_projection(float fov, float near_plane, float far_plane, msqglm_mat4* dest);
void msqglm_mat4_ortho(msqglm_vec2 top_left, msqglm_vec2 bottom_right, 
                       float near_plane, float far_plane, msqglm_mat4* dest);
