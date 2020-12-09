#ifndef __AS__TYPE_motor_type
#define __AS__TYPE_motor_type
typedef struct motor_type
{	plcbit Run_Brake;
	plcbit CW_CCW;
	plcbit Start_Stop;
	signed short Speed;
} motor_type;
#endif

#ifndef __AS__TYPE_io_type
#define __AS__TYPE_io_type
typedef struct io_type
{	motor_type motor;
	plcbit di_limitBottom;
	plcbit di_limitTop;
	plcbit di_tapeswitchBlack;
	plcbit di_tapeswitchYellow;
	plcbit di_forwardButton;
	plcbit di_backwardButton;
} io_type;
#endif

_BUR_LOCAL io_type io;
