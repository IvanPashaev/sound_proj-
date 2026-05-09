/* 
   TINY3D sample / (c) 2010 Hermes  <www.elotrolado.net>

*/

#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <assert.h>
#include <unistd.h>
#include <math.h>

#include <io/pad.h>

#include <tiny3d.h>
#include <ya2d.h>
#include <libfont.h>

#include "spu_soundlib.h"
#include "audioplayer.h"
#include "spu_soundmodule.bin.h"

// font 2: 255 chr from 0 to 254, 8 x 8 pix 1 bit depth
extern unsigned char msx[];


int main(){
    ya2d_init();
    //ya2d_Texture *texture1 = ya2d_loadPNGfromBuffer((void *)pngsample_png, pngsample_png_size);
    bool is_pressed = false;
    while (1)
    {
        ya2d_screenClear();
		ya2d_screenBeginDrawing();
		ya2d_controlsRead();

        SetCurrentFont(0);

        if (is_pressed){
            DrawFormatString(50,20,"you press the x button!",msx);
        } else{
            DrawFormatString(50,20,"PS3 music player",msx);
        }
        //audio

        ya2d_screenFlip();
        
        if(ya2d_paddata[0].BTN_START) break;
        if(ya2d_paddata[0].BTN_CROSS) is_pressed = true;
    }
    ya2d_deinit();
	return 0;
}
