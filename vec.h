typedef int msqglm_ivec2[2];

float msqglm_ivec2_length(msqglm_ivec2);
float msqglm_ivec2_angle(msqglm_ivec2, msqglm_ivec2);
void msqglm_ivec2_add(msqglm_ivec2, msqglm_ivec2, msqglm_ivec2 *ans);
void msqglm_ivec2_sub(msqglm_ivec2, msqglm_ivec2, msqglm_ivec2 *ans);
float msqglm_ivec2_dot(msqglm_ivec2, msqglm_ivec2);
void msqglm_ivec2_mul(msqglm_ivec2, float, msqglm_ivec2 *ans);
void msqglm_ivec2_sprint(char*, msqglm_ivec2);

typedef float msqglm_vec2[2];

float msqglm_vec2_length(msqglm_vec2);
float msqglm_vec2_angle(msqglm_vec2, msqglm_vec2);
void msqglm_vec2_add(msqglm_vec2, msqglm_vec2, msqglm_vec2 *ans);
void msqglm_vec2_sub(msqglm_vec2, msqglm_vec2, msqglm_vec2 *ans);
float msqglm_vec2_dot(msqglm_vec2, msqglm_vec2);
void msqglm_vec2_mul(msqglm_vec2, float, msqglm_vec2 *ans);
void msqglm_vec2_sprint(char*, msqglm_vec2);

void msqglm_ivec2_to_vec2(msqglm_ivec2, msqglm_vec2*);

typedef int msqglm_ivec3[3];

float msqglm_ivec3_length(msqglm_ivec3);
float msqglm_ivec3_angle(msqglm_ivec3, msqglm_ivec3);
void msqglm_ivec3_add(msqglm_ivec3, msqglm_ivec3, msqglm_ivec3 *ans);
void msqglm_ivec3_sub(msqglm_ivec3, msqglm_ivec3, msqglm_ivec3 *ans);
float msqglm_ivec3_dot(msqglm_ivec3, msqglm_ivec3);
void msqglm_ivec3_mul(msqglm_ivec3, float, msqglm_ivec3 *ans);
void msqglm_ivec3_cross(msqglm_ivec3, msqglm_ivec3, msqglm_ivec3 *ans);
void msqglm_ivec3_sprint(char*, msqglm_ivec3);

typedef float msqglm_vec3[3];

float msqglm_vec3_length(msqglm_vec3);
float msqglm_vec3_angle(msqglm_vec3, msqglm_vec3);
void msqglm_vec3_add(msqglm_vec3, msqglm_vec3, msqglm_vec3 *ans);
void msqglm_vec3_sub(msqglm_vec3, msqglm_vec3, msqglm_vec3 *ans);
float msqglm_vec3_dot(msqglm_vec3, msqglm_vec3);
void msqglm_vec3_mul(msqglm_vec3, float, msqglm_vec3 *ans);
void msqglm_vec3_cross(msqglm_vec3, msqglm_vec3, msqglm_vec3 *ans);
void msqglm_vec3_sprint(char*, msqglm_vec3);

void msqglm_ivec3_to_vec3(msqglm_ivec3, msqglm_vec3*);

typedef int msqglm_ivec4[4];

float msqglm_ivec4_length(msqglm_ivec4);
float msqglm_ivec4_angle(msqglm_ivec4, msqglm_ivec4);
void msqglm_ivec4_add(msqglm_ivec4, msqglm_ivec4, msqglm_ivec4 *ans);
void msqglm_ivec4_sub(msqglm_ivec4, msqglm_ivec4, msqglm_ivec4 *ans);
float msqglm_ivec4_dot(msqglm_ivec4, msqglm_ivec4);
void msqglm_ivec4_mul(msqglm_ivec4, float, msqglm_ivec4 *ans);
void msqglm_ivec4_sprint(char*, msqglm_ivec4);

typedef float msqglm_vec4[4];

float msqglm_vec4_length(msqglm_vec4);
float msqglm_vec4_angle(msqglm_vec4, msqglm_vec4);
void msqglm_vec4_add(msqglm_vec4, msqglm_vec4, msqglm_vec4 *ans);
void msqglm_vec4_sub(msqglm_vec4, msqglm_vec4, msqglm_vec4 *ans);
float msqglm_vec4_dot(msqglm_vec4, msqglm_vec4);
void msqglm_vec4_mul(msqglm_vec4, float, msqglm_vec4 *ans);
void msqglm_vec4_sprint(char*, msqglm_vec4);

void msqglm_ivec4_to_vec4(msqglm_ivec4, msqglm_vec4*);
