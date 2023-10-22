void main()
{
  ADCON1 = 0X0F;
  TRISB = 0X01;

  while(1)
  {
    if(PORTB.RB0 == 1)
    {
      PORTB.RB1 = 1;
      Delay_ms(10);
      PORTB.RB1 = 0;
    }
  }
}
