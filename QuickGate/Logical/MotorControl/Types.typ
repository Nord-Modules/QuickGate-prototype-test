
TYPE
	io_type : 	STRUCT 
		motor : motor_type;
		di_limitBottom : BOOL;
		di_limitTop : BOOL;
		di_tapeswitchBlack : BOOL;
		di_tapeswitchYellow : BOOL;
		di_forwardButton : BOOL;
		di_backwardButton : BOOL;
	END_STRUCT;
	motor_type : 	STRUCT  (*TRUE_FALSE*)
		Run_Brake : BOOL; (*TRUE_FALSE
*)
		CW_CCW : BOOL; (*TRUE_FALSE
*)
		Start_Stop : BOOL; (*TRUE_FALSE
*)
		Speed : INT;
	END_STRUCT;
	Direction_Type : 	STRUCT 
	END_STRUCT;
END_TYPE
