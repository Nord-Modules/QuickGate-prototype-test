
PROGRAM _INIT
	io.motor.Speed := 5000;
	
END_PROGRAM

PROGRAM _CYCLIC
	(* Insert code here *)
	IF io.di_tapeswitchBlack OR io.di_tapeswitchYellow THEN
		io.motor.Run_Brake := FALSE;
	ELSIF EDGEPOS (io.di_backwardButton) OR EDGEPOS (io.di_forwardButton) THEN
		io.motor.Run_Brake := TRUE;
	END_IF;
	 
	IF io.di_forwardButton THEN
		io.motor.CW_CCW := TRUE;
		io.motor.Start_Stop := TRUE;
		
	ELSIF io.di_backwardButton THEN
		io.motor.CW_CCW := FALSE;
		io.motor.Start_Stop := TRUE;
			
	ELSE
		io.motor.Start_Stop := FALSE; 
	END_IF;
	
	IF NOT io.di_limitBottom OR NOT io.di_limitTop THEN
		io.motor.Start_Stop := FALSE;
	END_IF
	
	
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM

