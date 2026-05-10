#include "ya2d_controls.h"

void ya2d_controlsRead()
{
	int i;
	ioPadGetInfo2(&ya2d_padinfo);
	for(i = 0; i < MAX_PORT_NUM; i++)
	{		 
		if(ya2d_padinfo.port_status[i])
		{
			ioPadGetData(i, &ya2d_paddata[i]);	 
		}
	}	
}
/// @brief 
/// @param port - controller port(порт контроллера)
/// @param button - button on the controller(кнопка на контроллере)
/// @return 
int ya2d_button_pressed(int port, ya2d_button_t button){
	if (port < 0) return false;
	
	switch (button) {
        case YA2D_BTN_CROSS:
            return (ya2d_paddata[port].BTN_CROSS != 0);
        case YA2D_BTN_TRIANGLE:
            return (ya2d_paddata[port].BTN_TRIANGLE != 0);
        case YA2D_BTN_CIRCLE:
            return (ya2d_paddata[port].BTN_CIRCLE != 0);
        case YA2D_BTN_SQUARE:
            return (ya2d_paddata[port].BTN_SQUARE != 0);
        case YA2D_BTN_UP:
            return (ya2d_paddata[port].BTN_UP != 0);
        case YA2D_BTN_DOWN:
            return (ya2d_paddata[port].BTN_DOWN != 0);
        case YA2D_BTN_LEFT:
            return (ya2d_paddata[port].BTN_LEFT != 0);
        case YA2D_BTN_RIGHT:
            return (ya2d_paddata[port].BTN_RIGHT != 0);
        case YA2D_BTN_L1:
            return (ya2d_paddata[port].BTN_L1 != 0);
        case YA2D_BTN_L2:
            return (ya2d_paddata[port].BTN_L2 != 0);
        case YA2D_BTN_L3:
            return (ya2d_paddata[port].BTN_L3 != 0);
        case YA2D_BTN_R1:
            return (ya2d_paddata[port].BTN_R1 != 0);
        case YA2D_BTN_R2:
            return (ya2d_paddata[port].BTN_R2 != 0);
        case YA2D_BTN_R3:
            return (ya2d_paddata[port].BTN_R3 != 0);
        case YA2D_BTN_SELECT:
            return (ya2d_paddata[port].BTN_SELECT != 0);
        case YA2D_BTN_START:
            return (ya2d_paddata[port].BTN_START != 0);
        default:
            return false;
    }
}