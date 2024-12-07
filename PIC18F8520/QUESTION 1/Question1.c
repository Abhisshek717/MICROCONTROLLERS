void main() {
   // Making all the digital input ouput pins into digital pins
   ADCON1 = 0X0F;   // 0X0F BINARY REPRESENTATION: 0000 1111

   TRISD = 0X00;    // MAKING TRISTATE OF D PORT INTO OUPUT

   PORTD = 0X00;   

   while(1)
   {
        PORTD.RD0 = 0;

        delay_ms(1000);

        PORTD.RD0 = 1;

        delay_ms(1000);
   } 
}