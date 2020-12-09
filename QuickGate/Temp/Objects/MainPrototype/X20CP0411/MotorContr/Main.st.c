#define _DEFAULT_INCLUDE
#include <bur\plctypes.h>
#include "C:/projects/QuickGate/Temp/Objects/Config1/X20CP0411/MotorContr/Mainst.h"
#line 1 "C:/projects/QuickGate/Logical/MotorControl/Main.nodebug"
#line 2 "C:/projects/QuickGate/Logical/MotorControl/Main.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{
(io.motor.Speed=5000);

}}
#line 5 "C:/projects/QuickGate/Logical/MotorControl/Main.nodebug"
#line 7 "C:/projects/QuickGate/Logical/MotorControl/Main.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

if((io.di_tapeswitchBlack|io.di_tapeswitchYellow)){
(io.motor.Run_Brake=0);
}else if(((io.di_backwardButton&~Edge0000100000&1?((Edge0000100000=io.di_backwardButton&1),1):((Edge0000100000=io.di_backwardButton&1),0))|(io.di_forwardButton&~Edge0000100001&1?((Edge0000100001=io.di_forwardButton&1),1):((Edge0000100001=io.di_forwardButton&1),0)))){
(io.motor.Run_Brake=1);
}

if(io.di_forwardButton){
(io.motor.CW_CCW=1);
(io.motor.Start_Stop=1);

}else if(io.di_backwardButton){
(io.motor.CW_CCW=0);
(io.motor.Start_Stop=1);

}else{
(io.motor.Start_Stop=0);
}

if(((io.di_limitBottom^1)|(io.di_limitTop^1))){
(io.motor.Start_Stop=0);
}


}imp1_else2_0:imp1_end2_0:;}
#line 32 "C:/projects/QuickGate/Logical/MotorControl/Main.nodebug"
#line 34 "C:/projects/QuickGate/Logical/MotorControl/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 37 "C:/projects/QuickGate/Logical/MotorControl/Main.nodebug"

void __AS__ImplInitMain_st(void){__BUR__ENTRY_INIT_FUNCT__();}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/MotorControl/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/MotorControl/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/projects/QuickGate/Temp/Objects/Config1/X20CP0411/MotorContr/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plcreplace \\\"C:/projects/QuickGate/Temp/Objects/Config1/X20CP0411/MotorContr/Main.st.c\\\" \\\"C:/projects/QuickGate/Logical/MotorControl/Main.st\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Temp/Objects/Config1/X20CP0411/MotorContr/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".previous");
