#line 1 "C:/Users/hp/OneDrive/Desktop/PIC18F8520/BASIC PRACTICE QUESTIONS/QUESTION 1/Question1.c"
void main() {

 ADCON1 = 0X0F;

 TRISD = 0X00;

 PORTD = 0X00;

 while(1)
 {
 PORTD.RD0 = 0;

 delay_ms(1000);

 PORTD.RD0 = 1;

 delay_ms(1000);
 }
}
