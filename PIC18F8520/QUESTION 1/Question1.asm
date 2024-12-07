
_main:

;Question1.c,1 :: 		void main() {
;Question1.c,3 :: 		ADCON1 = 0X0F;   // 0X0F BINARY REPRESENTATION: 0000 1111
	MOVLW       15
	MOVWF       ADCON1+0 
;Question1.c,5 :: 		TRISD = 0X00;    // MAKING TRISTATE OF D PORT INTO OUPUT
	CLRF        TRISD+0 
;Question1.c,7 :: 		PORTD = 0X00;
	CLRF        PORTD+0 
;Question1.c,9 :: 		while(1)
L_main0:
;Question1.c,11 :: 		PORTD.RD0 = 0;
	BCF         PORTD+0, 0 
;Question1.c,13 :: 		delay_ms(1000);
	MOVLW       13
	MOVWF       R11, 0
	MOVLW       175
	MOVWF       R12, 0
	MOVLW       182
	MOVWF       R13, 0
L_main2:
	DECFSZ      R13, 1, 1
	BRA         L_main2
	DECFSZ      R12, 1, 1
	BRA         L_main2
	DECFSZ      R11, 1, 1
	BRA         L_main2
	NOP
;Question1.c,15 :: 		PORTD.RD0 = 1;
	BSF         PORTD+0, 0 
;Question1.c,17 :: 		delay_ms(1000);
	MOVLW       13
	MOVWF       R11, 0
	MOVLW       175
	MOVWF       R12, 0
	MOVLW       182
	MOVWF       R13, 0
L_main3:
	DECFSZ      R13, 1, 1
	BRA         L_main3
	DECFSZ      R12, 1, 1
	BRA         L_main3
	DECFSZ      R11, 1, 1
	BRA         L_main3
	NOP
;Question1.c,18 :: 		}
	GOTO        L_main0
;Question1.c,19 :: 		}
L_end_main:
	GOTO        $+0
; end of _main
