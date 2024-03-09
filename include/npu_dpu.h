#ifndef NPU_DPU_H
#define NPU_DPU_H

#include <stdint.h>

typedef struct npu_dpu_desc {
 uint8_t burst_len;         // 0x400C
 uint8_t conv_mode;         // 0x400C
 uint8_t output_mode;       // 0x400C
 uint8_t flying_mode;       // 0x400C
 uint8_t out_precision;     // 0x4010
 uint8_t in_precision;      // 0x4010
 uint8_t proc_precision;    // 0x4010
 uint32_t dst_base_addr;    // 0x4020
 uint32_t dst_surf_stride;  // 0x4024
 uint16_t width;            // 0x4030
 uint16_t height;           // 0x4034
 uint16_t channel;          // 0x403C
 uint8_t bs_bypass;         // 0x4040
 uint8_t bs_alu_bypass;     // 0x4040
 uint8_t bs_mul_bypass;     // 0x4040
 uint8_t bs_relu_bypass;    // 0x4040
 uint8_t od_bypass;         // 0x4050
 uint8_t size_e_2;          // 0x4050
 uint8_t size_e_1;          // 0x4050
 uint8_t size_e_0;          // 0x4050
 uint16_t channel_wdma;     // 0x4058
 uint16_t height_wdma;      // 0x405C
 uint16_t width_wdma;       // 0x405C
 uint8_t bn_relu_bypass;    // 0x4060
 uint8_t bn_mul_bypass;     // 0x4060
 uint8_t bn_alu_bypass;     // 0x4060
 uint8_t bn_bypass;         // 0x4060
 uint8_t ew_bypass;         // 0x4070
 uint8_t ew_op_bypass;      // 0x4070
 uint8_t ew_lut_bypass;     // 0x4070
 uint8_t ew_op_cvt_bypass;  // 0x4070
 uint8_t ew_relu_bypass;    // 0x4070
 uint32_t surf_add;         // 0x40C0
} npu_dpu_desc;

#endif // NPU_DPU_H
