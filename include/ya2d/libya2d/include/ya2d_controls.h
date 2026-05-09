#ifndef _YA2D_CONTROLS_H_
#define _YA2D_CONTROLS_H_

#include <io/pad.h>

typedef enum {
    YA2D_BTN_CROSS,
    YA2D_BTN_TRIANGLE,
    YA2D_BTN_CIRCLE,
    YA2D_BTN_SQUARE,
    YA2D_BTN_UP,
    YA2D_BTN_DOWN,
    YA2D_BTN_LEFT,
    YA2D_BTN_RIGHT,
    YA2D_BTN_L1,
    YA2D_BTN_L2,
    YA2D_BTN_L3,
    YA2D_BTN_R1,
    YA2D_BTN_R2,
    YA2D_BTN_R3,
    YA2D_BTN_SELECT,
    YA2D_BTN_START
}ya2d_button_t;

padInfo2 ya2d_padinfo;
padData  ya2d_paddata[7];
	

void ya2d_controlsRead();


#endif
