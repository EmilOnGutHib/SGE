//
// Created by Geisthardt on 10.03.2025.
//

#ifndef SGE_VULKAN_SHADER_H
#define SGE_VULKAN_SHADER_H

#include "renderer/sge_render.h"
#include "vulkan_structs.h"

VkShaderModule sge_vulkan_shader_load(sge_render *render, const char *shader_name);
VkShaderModule sge_vulkan_shader_load_old(sge_render *render, const char *shader_name);

#endif //SGE_VULKAN_SHADER_H
