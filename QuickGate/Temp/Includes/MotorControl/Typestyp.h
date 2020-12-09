/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1605521582_1_
#define _BUR_1605521582_1_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef struct motor_type
{	plcbit Run_Brake;
	plcbit CW_CCW;
	plcbit Start_Stop;
	signed short Speed;
} motor_type;

typedef struct io_type
{	struct motor_type motor;
	plcbit di_limitBottom;
	plcbit di_limitTop;
	plcbit di_tapeswitchBlack;
	plcbit di_tapeswitchYellow;
	plcbit di_forwardButton;
	plcbit di_backwardButton;
} io_type;

typedef struct Direction_Type
{
} Direction_Type;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/MotorControl/Types.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1605521582_1_ */

