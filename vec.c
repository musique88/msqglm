#include "../inc/vec.h"
#include <math.h>

//ivec2
float msqglm_ivec2_length(msqglm_ivec2 v)
{
	return sqrt(v[0] * v[0] + v[1] * v[1]);	
}

float msqglm_ivec2_angle(msqglm_ivec2 a, msqglm_ivec2 b)
{
	return acos(msqglm_ivec2_dot(a,b)/(msqglm_ivec2_length(a) * msqglm_ivec2_length(b)));
}

void msqglm_ivec2_add(msqglm_ivec2 a, msqglm_ivec2 b, msqglm_ivec2 *ans)
{
    (*ans)[0] = a[0] + b[0];
    (*ans)[1] = a[1] + b[1];
}

void msqglm_ivec2_sub(msqglm_ivec2 a, msqglm_ivec2 b, msqglm_ivec2 *ans)
{
	(*ans)[0] = a[0] - b[0];
    (*ans)[1] = a[1] - b[1];
}

float msqglm_ivec2_dot(msqglm_ivec2 a, msqglm_ivec2 b)
{
    return a[0] * b[0] + a[1] * b[1];
}

void msqglm_ivec2_mul(msqglm_ivec2 v, float k, msqglm_ivec2 *ans)
{
    (*ans)[0] = v[0] * k;
    (*ans)[1] = v[1] * k;
}

//vec2
float msqglm_vec2_length(msqglm_vec2 v)
{
	return sqrt(v[0] * v[0] + v[1] * v[1]);	
}

float msqglm_vec2_angle(msqglm_vec2 a, msqglm_vec2 b)
{
	return acos(msqglm_vec2_dot(a,b)/(msqglm_vec2_length(a) * msqglm_vec2_length(b)));
}

void msqglm_vec2_add(msqglm_vec2 a, msqglm_vec2 b, msqglm_vec2 *ans)
{
    (*ans)[0] = a[0] + b[0];
    (*ans)[1] = a[1] + b[1];
}

void msqglm_vec2_sub(msqglm_vec2 a, msqglm_vec2 b, msqglm_vec2 *ans)
{
	(*ans)[0] = a[0] - b[0];
    (*ans)[1] = a[1] - b[1];
}

float msqglm_vec2_dot(msqglm_vec2 a, msqglm_vec2 b)
{
    return a[0] * b[0] + a[1] * b[1];
}

void msqglm_vec2_mul(msqglm_vec2 v, float k, msqglm_vec2 *ans)
{
    (*ans)[0] = v[0] * k;
    (*ans)[1] = v[1] * k;
}

void msqglm_ivec2_to_vec2(msqglm_ivec2 a, msqglm_vec2* ans)
{
    (*ans)[0] = a[0];
    (*ans)[1] = a[1];
}

//ivec3
float msqglm_ivec3_length(msqglm_ivec3 v)
{
	return sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
}

float msqglm_ivec3_angle(msqglm_ivec3 a, msqglm_ivec3 b)
{
	return acos(msqglm_ivec3_dot(a,b)/(msqglm_ivec3_length(a) * msqglm_ivec3_length(b)));
}

void msqglm_ivec3_add(msqglm_ivec3 a, msqglm_ivec3 b, msqglm_ivec3 *ans)
{
    (*ans)[0] = a[0] + b[0];
    (*ans)[1] = a[1] + b[1];
    (*ans)[2] = a[2] + b[2];
}

void msqglm_ivec3_sub(msqglm_ivec3 a, msqglm_ivec3 b, msqglm_ivec3 *ans)
{
    (*ans)[0] = a[0] - b[0];
    (*ans)[1] = a[1] - b[1];
    (*ans)[2] = a[2] - b[2];
}

float msqglm_ivec3_dot(msqglm_ivec3 a, msqglm_ivec3 b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void msqglm_ivec3_mul(msqglm_ivec3 v, float k, msqglm_ivec3 *ans)
{
    (*ans)[0] = v[0] * k;
    (*ans)[1] = v[1] * k;
    (*ans)[2] = v[2] * k;
}

void msqglm_ivec3_cross(msqglm_ivec3 a, msqglm_ivec3 b, msqglm_ivec3 *ans)
{
    (*ans)[0] = a[1] * b[2] - a[2] * b[1]; 
    (*ans)[1] = a[2] * b[0] - a[0] * b[2]; 
    (*ans)[2] = a[0] * b[1] - a[1] * b[0]; 
}

//vec3
float msqglm_vec3_length(msqglm_vec3 v)
{
	return sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
}

float msqglm_vec3_angle(msqglm_vec3 a, msqglm_vec3 b)
{
	return acos(msqglm_vec3_dot(a,b)/(msqglm_vec3_length(a) * msqglm_vec3_length(b)));
}

void msqglm_vec3_add(msqglm_vec3 a, msqglm_vec3 b, msqglm_vec3 *ans)
{
    (*ans)[0] = a[0] + b[0];
    (*ans)[1] = a[1] + b[1];
    (*ans)[2] = a[2] + b[2];
}

void msqglm_vec3_sub(msqglm_vec3 a, msqglm_vec3 b, msqglm_vec3 *ans)
{
    (*ans)[0] = a[0] - b[0];
    (*ans)[1] = a[1] - b[1];
    (*ans)[2] = a[2] - b[2];
}

float msqglm_vec3_dot(msqglm_vec3 a, msqglm_vec3 b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void msqglm_vec3_mul(msqglm_vec3 v, float k, msqglm_vec3 *ans)
{
    (*ans)[0] = v[0] * k;
    (*ans)[1] = v[1] * k;
    (*ans)[2] = v[2] * k;
}

void msqglm_vec3_cross(msqglm_vec3 a, msqglm_vec3 b, msqglm_vec3 *ans)
{
    (*ans)[0] = a[1] * b[2] - a[2] * b[1]; 
    (*ans)[1] = a[2] * b[0] - a[0] * b[2]; 
    (*ans)[2] = a[0] * b[1] - a[1] * b[0]; 
}

void msqglm_ivec3_to_vec3(msqglm_ivec3 a, msqglm_vec3* ans)
{
    (*ans)[0] = a[0];
    (*ans)[1] = a[1];
    (*ans)[2] = a[2];
}

//ivec4
float msqglm_ivec4_length(msqglm_ivec4 v)
{
	return sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2] + v[3] * v[3]);
}

float msqglm_ivec4_angle(msqglm_ivec4 a, msqglm_ivec4 b)
{
	return acos(msqglm_ivec4_dot(a,b)/(msqglm_ivec4_length(a) * msqglm_ivec4_length(b)));
}

void msqglm_ivec4_add(msqglm_ivec4 a, msqglm_ivec4 b, msqglm_ivec4 *ans)
{
    (*ans)[0] = a[0] + b[0];
    (*ans)[1] = a[1] + b[1];
    (*ans)[2] = a[2] + b[2];
    (*ans)[3] = a[3] + b[3];
}

void msqglm_ivec4_sub(msqglm_ivec4 a, msqglm_ivec4 b, msqglm_ivec4 *ans)
{
    (*ans)[0] = a[0] - b[0];
    (*ans)[1] = a[1] - b[1];
    (*ans)[2] = a[2] - b[2];
    (*ans)[3] = a[3] - b[3];
}

float msqglm_ivec4_dot(msqglm_ivec4 a, msqglm_ivec4 b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3];
}

void msqglm_ivec4_mul(msqglm_ivec4 v, float k, msqglm_ivec4 *ans)
{
    (*ans)[0] = v[0] * k;
    (*ans)[1] = v[1] * k;
    (*ans)[2] = v[2] * k;
    (*ans)[3] = v[3] * k;
}

//vec4
float msqglm_vec4_length(msqglm_vec4 v)
{
	return sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2] + v[3] * v[3]);
}

float msqglm_vec4_angle(msqglm_vec4 a, msqglm_vec4 b)
{
	return acos(msqglm_vec4_dot(a,b)/(msqglm_vec4_length(a) * msqglm_vec4_length(b)));
}

void msqglm_vec4_add(msqglm_vec4 a, msqglm_vec4 b, msqglm_vec4 *ans)
{
    (*ans)[0] = a[0] + b[0];
    (*ans)[1] = a[1] + b[1];
    (*ans)[2] = a[2] + b[2];
    (*ans)[3] = a[3] + b[3];
}

void msqglm_vec4_sub(msqglm_vec4 a, msqglm_vec4 b, msqglm_vec4 *ans)
{
    (*ans)[0] = a[0] - b[0];
    (*ans)[1] = a[1] - b[1];
    (*ans)[2] = a[2] - b[2];
    (*ans)[3] = a[3] - b[3];
}

float msqglm_vec4_dot(msqglm_vec4 a, msqglm_vec4 b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3];
}

void msqglm_vec4_mul(msqglm_vec4 v, float k, msqglm_vec4 *ans)
{
    (*ans)[0] = v[0] * k;
    (*ans)[1] = v[1] * k;
    (*ans)[2] = v[2] * k;
    (*ans)[3] = v[3] * k;
}

void msqglm_ivec4_to_vec4(msqglm_ivec4 a, msqglm_vec4* ans)
{
    (*ans)[0] = a[0];
    (*ans)[1] = a[1];
    (*ans)[2] = a[2];
    (*ans)[3] = a[3];
}

