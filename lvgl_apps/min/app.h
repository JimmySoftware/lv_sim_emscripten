#ifndef __APP_MIN_H__
#define __APP_MIN_H__

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "../lvgl/lvgl.h"
#endif

void app_min_init();

#ifdef __cplusplus
}
#endif

#endif //__APP_MIN_H__