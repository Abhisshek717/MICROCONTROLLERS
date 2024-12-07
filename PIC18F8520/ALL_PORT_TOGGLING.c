/*
    GPIO TOGGLING TEST CODE
    Microcontroller: PIC18F8520
*/

void main() {

    // MAKING ALL DIGITAL IO's TO Digital pins
    ADCON1 = 0X0F;

    //Port configuration
    TRISA = 0X00;
    TRISB = 0X00;
    TRISC = 0X00;
    TRISD = 0X00;
    TRISE = 0X00;
    TRISF = 0X00;
    TRISG = 0X00;
    TRISH = 0X00;
    TRISJ = 0X00;


    // INITIAL PORT CONFIGURATION TO 0


    // Inifinite loop
    while(1)
    {
        PORTA = 0X00;
        PORTB = 0X00;
        PORTC = 0X00;
        PORTD = 0X00;
        PORTE = 0X00;
        PORTF = 0X00;
        PORTG = 0X00;
        PORTH = 0X00;
        PORTJ = 0X00;


        delay_ms(500);

        PORTA = 0XFF;
        PORTB = 0XFF;
        PORTC = 0XFF;
        PORTD = 0XFF;
        PORTE = 0XFF;
        PORTF = 0XFF;
        PORTG = 0XFF;
        PORTH = 0XFF;
        PORTJ = 0XFF;

        delay_ms(500);
    }
}
