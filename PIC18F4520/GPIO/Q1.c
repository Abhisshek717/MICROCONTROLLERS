void main()
{
  // Configure the ADCON1 register to set PORTB pins as digital I/O.
  ADCON1 = 0x0F;

  // Configure the TRISB register to set RB0 as an input (1) and other pins as outputs (0).
  TRISB = 0x01;

  // Create an infinite loop to continuously monitor the state of RB0.
  while(1)
  {
    // Check if RB0 is in the high state (logic level 1).
    if(PORTB.RB0 == 1)
    {
      // Activate RB1 to high (logic level 1) in response to RB0.
      PORTB.RB1 = 1;

      // Introduce a 10-millisecond delay to control the duration of the RB1 activation.
      Delay_ms(10);

      // Return RB1 to the low state (logic level 0).
      PORTB.RB1 = 0;
    }
  }
}
