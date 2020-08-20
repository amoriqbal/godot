#ifndef VP8_RTCD_H_
#define VP8_RTCD_H_

#ifdef RTCD_C
#define RTCD_EXTERN
#else
#define RTCD_EXTERN extern
#endif

/*
 * VP8
 */

struct blockd;
struct loop_filter_info;

#ifdef __cplusplus
extern "C" {
#endif

void vp8_bilinear_predict16x16_c ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
void vp8_bilinear_predict16x16_neon ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
RTCD_EXTERN void ( *vp8_bilinear_predict16x16 ) ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );

void vp8_bilinear_predict4x4_c ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
#define vp8_bilinear_predict4x4 vp8_bilinear_predict4x4_c

void vp8_bilinear_predict8x4_c ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
void vp8_bilinear_predict8x4_neon ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
RTCD_EXTERN void ( *vp8_bilinear_predict8x4 ) ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );

void vp8_bilinear_predict8x8_c ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
void vp8_bilinear_predict8x8_neon ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
RTCD_EXTERN void ( *vp8_bilinear_predict8x8 ) ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );

void vp8_clear_system_state_c();
#define vp8_clear_system_state vp8_clear_system_state_c

void vp8_copy_mem16x16_c ( unsigned char *src, int src_pitch, unsigned char *dst, int dst_pitch );
void vp8_copy_mem16x16_neon ( unsigned char *src, int src_pitch, unsigned char *dst, int dst_pitch );
RTCD_EXTERN void ( *vp8_copy_mem16x16 ) ( unsigned char *src, int src_pitch, unsigned char *dst, int dst_pitch );

void vp8_copy_mem8x4_c ( unsigned char *src, int src_pitch, unsigned char *dst, int dst_pitch );
void vp8_copy_mem8x4_neon ( unsigned char *src, int src_pitch, unsigned char *dst, int dst_pitch );
RTCD_EXTERN void ( *vp8_copy_mem8x4 ) ( unsigned char *src, int src_pitch, unsigned char *dst, int dst_pitch );

void vp8_copy_mem8x8_c ( unsigned char *src, int src_pitch, unsigned char *dst, int dst_pitch );
void vp8_copy_mem8x8_neon ( unsigned char *src, int src_pitch, unsigned char *dst, int dst_pitch );
RTCD_EXTERN void ( *vp8_copy_mem8x8 ) ( unsigned char *src, int src_pitch, unsigned char *dst, int dst_pitch );

void vp8_dc_only_idct_add_c ( short input, unsigned char *pred, int pred_stride, unsigned char *dst, int dst_stride );
void vp8_dc_only_idct_add_neon ( short input, unsigned char *pred, int pred_stride, unsigned char *dst, int dst_stride );
RTCD_EXTERN void ( *vp8_dc_only_idct_add ) ( short input, unsigned char *pred, int pred_stride, unsigned char *dst, int dst_stride );

void vp8_dequant_idct_add_c ( short *input, short *dq, unsigned char *output, int stride );
void vp8_dequant_idct_add_neon ( short *input, short *dq, unsigned char *output, int stride );
RTCD_EXTERN void ( *vp8_dequant_idct_add ) ( short *input, short *dq, unsigned char *output, int stride );

void vp8_dequant_idct_add_uv_block_c ( short *q, short *dq, unsigned char *dst_u, unsigned char *dst_v, int stride, char *eobs );
void vp8_dequant_idct_add_uv_block_neon ( short *q, short *dq, unsigned char *dst_u, unsigned char *dst_v, int stride, char *eobs );
RTCD_EXTERN void ( *vp8_dequant_idct_add_uv_block ) ( short *q, short *dq, unsigned char *dst_u, unsigned char *dst_v, int stride, char *eobs );

void vp8_dequant_idct_add_y_block_c ( short *q, short *dq, unsigned char *dst, int stride, char *eobs );
void vp8_dequant_idct_add_y_block_neon ( short *q, short *dq, unsigned char *dst, int stride, char *eobs );
RTCD_EXTERN void ( *vp8_dequant_idct_add_y_block ) ( short *q, short *dq, unsigned char *dst, int stride, char *eobs );

void vp8_dequantize_b_c ( struct blockd*, short *dqc );
void vp8_dequantize_b_neon ( struct blockd*, short *dqc );
RTCD_EXTERN void ( *vp8_dequantize_b ) ( struct blockd*, short *dqc );

void vp8_loop_filter_bh_c ( unsigned char *y, unsigned char *u, unsigned char *v, int ystride, int uv_stride, struct loop_filter_info *lfi );
void vp8_loop_filter_bh_neon ( unsigned char *y, unsigned char *u, unsigned char *v, int ystride, int uv_stride, struct loop_filter_info *lfi );
RTCD_EXTERN void ( *vp8_loop_filter_bh ) ( unsigned char *y, unsigned char *u, unsigned char *v, int ystride, int uv_stride, struct loop_filter_info *lfi );

void vp8_loop_filter_bv_c ( unsigned char *y, unsigned char *u, unsigned char *v, int ystride, int uv_stride, struct loop_filter_info *lfi );
void vp8_loop_filter_bv_neon ( unsigned char *y, unsigned char *u, unsigned char *v, int ystride, int uv_stride, struct loop_filter_info *lfi );
RTCD_EXTERN void ( *vp8_loop_filter_bv ) ( unsigned char *y, unsigned char *u, unsigned char *v, int ystride, int uv_stride, struct loop_filter_info *lfi );

void vp8_loop_filter_mbh_c ( unsigned char *y, unsigned char *u, unsigned char *v, int ystride, int uv_stride, struct loop_filter_info *lfi );
void vp8_loop_filter_mbh_neon ( unsigned char *y, unsigned char *u, unsigned char *v, int ystride, int uv_stride, struct loop_filter_info *lfi );
RTCD_EXTERN void ( *vp8_loop_filter_mbh ) ( unsigned char *y, unsigned char *u, unsigned char *v, int ystride, int uv_stride, struct loop_filter_info *lfi );

void vp8_loop_filter_mbv_c ( unsigned char *y, unsigned char *u, unsigned char *v, int ystride, int uv_stride, struct loop_filter_info *lfi );
void vp8_loop_filter_mbv_neon ( unsigned char *y, unsigned char *u, unsigned char *v, int ystride, int uv_stride, struct loop_filter_info *lfi );
RTCD_EXTERN void ( *vp8_loop_filter_mbv ) ( unsigned char *y, unsigned char *u, unsigned char *v, int ystride, int uv_stride, struct loop_filter_info *lfi );

void vp8_loop_filter_bhs_c ( unsigned char *y, int ystride, const unsigned char *blimit );
void vp8_loop_filter_bhs_neon ( unsigned char *y, int ystride, const unsigned char *blimit );
RTCD_EXTERN void ( *vp8_loop_filter_simple_bh ) ( unsigned char *y, int ystride, const unsigned char *blimit );

void vp8_loop_filter_bvs_c ( unsigned char *y, int ystride, const unsigned char *blimit );
void vp8_loop_filter_bvs_neon ( unsigned char *y, int ystride, const unsigned char *blimit );
RTCD_EXTERN void ( *vp8_loop_filter_simple_bv ) ( unsigned char *y, int ystride, const unsigned char *blimit );

void vp8_loop_filter_simple_horizontal_edge_c ( unsigned char *y, int ystride, const unsigned char *blimit );
void vp8_loop_filter_mbhs_neon ( unsigned char *y, int ystride, const unsigned char *blimit );
RTCD_EXTERN void ( *vp8_loop_filter_simple_mbh ) ( unsigned char *y, int ystride, const unsigned char *blimit );

void vp8_loop_filter_simple_vertical_edge_c ( unsigned char *y, int ystride, const unsigned char *blimit );
void vp8_loop_filter_mbvs_neon ( unsigned char *y, int ystride, const unsigned char *blimit );
RTCD_EXTERN void ( *vp8_loop_filter_simple_mbv ) ( unsigned char *y, int ystride, const unsigned char *blimit );

void vp8_short_idct4x4llm_c ( short *input, unsigned char *pred, int pitch, unsigned char *dst, int dst_stride );
void vp8_short_idct4x4llm_neon ( short *input, unsigned char *pred, int pitch, unsigned char *dst, int dst_stride );
RTCD_EXTERN void ( *vp8_short_idct4x4llm ) ( short *input, unsigned char *pred, int pitch, unsigned char *dst, int dst_stride );

void vp8_short_inv_walsh4x4_c ( short *input, short *output );
void vp8_short_inv_walsh4x4_neon ( short *input, short *output );
RTCD_EXTERN void ( *vp8_short_inv_walsh4x4 ) ( short *input, short *output );

void vp8_short_inv_walsh4x4_1_c ( short *input, short *output );
#define vp8_short_inv_walsh4x4_1 vp8_short_inv_walsh4x4_1_c

void vp8_sixtap_predict16x16_c ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
void vp8_sixtap_predict16x16_neon ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
RTCD_EXTERN void ( *vp8_sixtap_predict16x16 ) ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );

void vp8_sixtap_predict4x4_c ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
#define vp8_sixtap_predict4x4 vp8_sixtap_predict4x4_c

void vp8_sixtap_predict8x4_c ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
void vp8_sixtap_predict8x4_neon ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
RTCD_EXTERN void ( *vp8_sixtap_predict8x4 ) ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );

void vp8_sixtap_predict8x8_c ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
void vp8_sixtap_predict8x8_neon ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );
RTCD_EXTERN void ( *vp8_sixtap_predict8x8 ) ( unsigned char *src, int src_pitch, int xofst, int yofst, unsigned char *dst, int dst_pitch );

void vp8_rtcd ( void );

#ifdef RTCD_C
#include "vpx_ports/arm.h"
static void setup_rtcd_internal ( void )
{
    int flags = arm_cpu_caps();

    vp8_bilinear_predict16x16 = vp8_bilinear_predict16x16_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_bilinear_predict16x16 = vp8_bilinear_predict16x16_neon;
    }
#endif
    vp8_bilinear_predict8x4 = vp8_bilinear_predict8x4_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_bilinear_predict8x4 = vp8_bilinear_predict8x4_neon;
    }
#endif
    vp8_bilinear_predict8x8 = vp8_bilinear_predict8x8_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_bilinear_predict8x8 = vp8_bilinear_predict8x8_neon;
    }
#endif
    vp8_copy_mem16x16 = vp8_copy_mem16x16_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_copy_mem16x16 = vp8_copy_mem16x16_neon;
    }
#endif
    vp8_copy_mem8x4 = vp8_copy_mem8x4_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_copy_mem8x4 = vp8_copy_mem8x4_neon;
    }
#endif
    vp8_copy_mem8x8 = vp8_copy_mem8x8_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_copy_mem8x8 = vp8_copy_mem8x8_neon;
    }
#endif
    vp8_dc_only_idct_add = vp8_dc_only_idct_add_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_dc_only_idct_add = vp8_dc_only_idct_add_neon;
    }
#endif
    vp8_dequant_idct_add = vp8_dequant_idct_add_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_dequant_idct_add = vp8_dequant_idct_add_neon;
    }
#endif
    vp8_dequant_idct_add_uv_block = vp8_dequant_idct_add_uv_block_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_dequant_idct_add_uv_block = vp8_dequant_idct_add_uv_block_neon;
    }
#endif
    vp8_dequant_idct_add_y_block = vp8_dequant_idct_add_y_block_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_dequant_idct_add_y_block = vp8_dequant_idct_add_y_block_neon;
    }
#endif
    vp8_dequantize_b = vp8_dequantize_b_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_dequantize_b = vp8_dequantize_b_neon;
    }
#endif
    vp8_loop_filter_bh = vp8_loop_filter_bh_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_loop_filter_bh = vp8_loop_filter_bh_neon;
    }
#endif
    vp8_loop_filter_bv = vp8_loop_filter_bv_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_loop_filter_bv = vp8_loop_filter_bv_neon;
    }
#endif
    vp8_loop_filter_mbh = vp8_loop_filter_mbh_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_loop_filter_mbh = vp8_loop_filter_mbh_neon;
    }
#endif
    vp8_loop_filter_mbv = vp8_loop_filter_mbv_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_loop_filter_mbv = vp8_loop_filter_mbv_neon;
    }
#endif
    vp8_loop_filter_simple_bh = vp8_loop_filter_bhs_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_loop_filter_simple_bh = vp8_loop_filter_bhs_neon;
    }
#endif
    vp8_loop_filter_simple_bv = vp8_loop_filter_bvs_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_loop_filter_simple_bv = vp8_loop_filter_bvs_neon;
    }
#endif
    vp8_loop_filter_simple_mbh = vp8_loop_filter_simple_horizontal_edge_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_loop_filter_simple_mbh = vp8_loop_filter_mbhs_neon;
    }
#endif
    vp8_loop_filter_simple_mbv = vp8_loop_filter_simple_vertical_edge_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_loop_filter_simple_mbv = vp8_loop_filter_mbvs_neon;
    }
#endif
    vp8_short_idct4x4llm = vp8_short_idct4x4llm_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_short_idct4x4llm = vp8_short_idct4x4llm_neon;
    }
#endif
    vp8_short_inv_walsh4x4 = vp8_short_inv_walsh4x4_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_short_inv_walsh4x4 = vp8_short_inv_walsh4x4_neon;
    }
#endif
    vp8_sixtap_predict16x16 = vp8_sixtap_predict16x16_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_sixtap_predict16x16 = vp8_sixtap_predict16x16_neon;
    }
#endif
    vp8_sixtap_predict8x4 = vp8_sixtap_predict8x4_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_sixtap_predict8x4 = vp8_sixtap_predict8x4_neon;
    }
#endif
    vp8_sixtap_predict8x8 = vp8_sixtap_predict8x8_c;
#if HAVE_NEON
    if ( flags & HAS_NEON ) {
        vp8_sixtap_predict8x8 = vp8_sixtap_predict8x8_neon;
    }
#endif
}
#endif

#ifdef __cplusplus
}  // extern "C"
#endif

#endif
