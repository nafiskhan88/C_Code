


/***************************
 * PWM Signal Generation using Arduino UNO
 
 ****************************/

/*

Timer output Arduino output  Chip pin  Pin name
//Timer 0
  OC0A          6               12        PD6
  OC0B          5               11        PD5

//timer 1
  OC1A          9               15        PB1
  OC1B          10              16        PB2

//timer 2
  OC2A          11              17        PB3
  OC2B          3               5         PD3

 */


 /***** Timer 0 ******
  * 
  * Register Setting:
  *
  * @@@@@ If fixed value of 0xFF (256 dec) used as counter in Fast PWM  @@@@
  *
  * Mode = 2, fast PWM
  * WGM00 = 1
  * WGM01 = 0
  * WGM02 = 0
  * 
  * clear OC0A on Compare match, set 0C0A at bottom , non inverting mode
  * COM0A0 = 0
  * COM0A1 = 1
  *
  *
  * clear OC0B on Compare match, set 0C0B at bottom , non inverting mode
  * COM0B0 = 0
  * COM0B1 = 1
  * 
  * Pre-scaler:
  * 
  * Divibe by 64 case:
  * CS00 = 1
  * CS01 = 1
  * CS02 = 0
  * 
  * Freq and Duty cycle:
  * 
  * Output A frequency: 16 MHz / 64 / 256 = 976.5625Hz
  * Output A duty cycle: (180+1) / 256 = 70.7%
  * Output B frequency: 16 MHz / 64 / 256 = 976.5625Hz
  * Output B duty cycle: (50+1) / 256 = 19.9%
  * 
  * 
  * 
  * 
  * @@@@@ if OCR0A used as counter in Fast PWM  @@@@
  * 
  * Mode = 7, fast PWM
  * WGM00 = 1
  * WGM01 = 1
  * WGM02 = 1
  * 
  * WGM02 = 1: Toggle OC0A on Compare Match
  * COM0A0 = 1
  * COM0A1 = 0
  *
  *
  * Clear OC0B on Compare Match, set OC0B at BOTTOM, (non-inverting mode)
  * COM0B0 = 0
  * COM0B1 = 1
  * 
  * Pre-scaler:
  * 
  * Divibe by 64 case:
  * CS00 = 1
  * CS01 = 1
  * CS02 = 0
  * 
  * 
  * 
  * Output A frequency: 16 MHz / 64 / (180+1) / 2 = 690.6Hz
  * Output A duty cycle: 50%
  * Output B frequency: 16 MHz / 64 / (180+1) = 1381.2Hz
  * Output B duty cycle: (50+1) / (180+1) = 28.2%
  *
  *
  *
  * @@@@ if OCR0A used as counter in Phase Correct PWM @@@@
  *
  * Mode = 5, fast PWM
  * WGM00 = 1
  * WGM01 = 0
  * WGM02 = 1
  * 
  * WGM02 = 1: Toggle OC0A on Compare Match
  * COM0A0 = 1
  * COM0A1 = 0
  *
  *
  * Clear OC0B on Compare Match, set OC0B at BOTTOM, (non-inverting mode)
  * COM0B0 = 0
  * COM0B1 = 1
  * 
  * Pre-scaler:
  * 
  * Divibe by 64 case:
  * CS00 = 1
  * CS01 = 1
  * CS02 = 0
  * 
  *
  *
  *
  */


/***** Timer 1 ******
  *  
  *  
  * @@@@@ If fixed value of 0xFF (256 dec) used as counter in Fast PWM  @@@@
  *
  * Mode = 5, fast PWM
  * WGM10 = 1
  * WGM11 = 0
  * WGM12 = 1
  * 
  * clear OC1A on Compare match, set 0C1A at bottom , non inverting mode
  * COM1A0 = 1
  * COM1A1 = 0
  *
  *
  * clear OC0B on Compare match, set 0C0B at bottom , non inverting mode
  * COM1B0 = 1
  * COM1B1 = 0
  * 
  * Pre-scaler:
  * 
  * Divibe by 64 case:
  * CS10 = 1
  * CS11 = 1
  * CS12 = 0
  * 
  * Freq and Duty cycle:
  * 
  * Output A frequency: 16 MHz / 64 / 256 = 976.5625Hz
  * Output A duty cycle: (180+1) / 256 = 70.7%
  * Output B frequency: 16 MHz / 64 / 256 = 976.5625Hz
  * Output B duty cycle: (50+1) / 256 = 19.9%
  *  
  *  
  *  
  *  
  *  
  *  
  * @@@@@ if OCR1A used as counter in Fast PWM  @@@@
  *
  * Mode = 15, fast PWM
  * WGM10 = 1
  * WGM11 = 1
  * 
  * WGM12 = 1 //TCCR1B
  * WGM13 = 1 //TCCR1B
  * 
  * Special Mode:
  * clear OC1A on Compare match, set 0C1A at bottom , non inverting mode
  * COM1A0 = 1
  * COM1A1 = 0
  *
  *
  * clear OC0B on Compare match, set 0C0B at bottom , non inverting mode
  * COM1B0 = 0
  * COM1B1 = 1
  * 
  * Pre-scaler:
  * 
  * Divibe by 64 case:
  * CS10 = 1
  * CS11 = 1
  * CS12 = 0
  * 
  * Freq and Duty cycle:
  * 
  * Output A: 50% 
  * Output B : OCR1B / OCR1A
  *  
  *  
  *  
  *  
  */
 






#define Fast_PWM_timer_0_fixed_counter 0
#define Fast_PWM_timer_0_OCR0A_counter 0
#define Phase_Correct_PWM_timer_0_OCR0A_counter 0


#define Fast_PWM_timer_1_fixed_counter 0
#define Fast_PWM_timer_1_OCR0A_counter 1
#define Phase_Correct_PWM_timer_1_OCR0A_counter 0



#define Timer_0_Output_A  6
#define Timer_0_Output_B  5

#define Timer_1_Output_A  9
#define Timer_1_Output_B  10

#define Timer_2_Output_A  11
#define Timer_2_Output_B  3








int PwmWidth = 0;
int WidthAmount = 5;
#define LEDPIN 13



void setup() {
  // put your setup code here, to run once:

  
  Serial.begin(9600);

  #if (Fast_PWM_timer_0_fixed_counter)
  Serial.println ("Fixed");
  
  pinMode (Timer_0_Output_A, OUTPUT);
  pinMode (Timer_0_Output_B, OUTPUT);

  TCCR0A = (1 << COM0A1)|   (1 << COM0B1) | (1 << WGM00) ;
  Serial.println (TCCR0A, BIN);
  TCCR0B = (1 << CS02);// |  (1 << CS00) ;         // CS00 & CS01 : divide by 64
  Serial.println (TCCR0B, BIN);


  OCR0A = 180;   
  OCR0B = 50;  

  //Duty cycle A = 180 + 1 / 255 + 1 = 70.7 %
  //Duty cycle B = 50 + 1 / 255 + 1 = 19.9 %
  
  #endif



  #if (Fast_PWM_timer_0_OCR0A_counter)
  Serial.println ("Fast PWM Variable");

  pinMode (Timer_0_Output_A, OUTPUT);
  pinMode (Timer_0_Output_B, OUTPUT);

  TCCR0A = (1 << COM0A0) |   (1 << COM0B1) | (1 << WGM01) | (1 << WGM00) ;
  Serial.println (TCCR0A, BIN);
  TCCR0B = (1 << WGM02) | (1 << CS01) |  (1 << CS00) ;         // CS00 & CS01 : divide by 64
  Serial.println (TCCR0B, BIN);

  
  OCR0A = 180;   
  OCR0B = 50;

  //Duty cuycle 50/180 = 27.8%
  
  #endif



  #if (Phase_Correct_PWM_timer_0_OCR0A_counter)
  
  Serial.println ("Phase Correct PWM Variable");

  pinMode (Timer_0_Output_A, OUTPUT);
  pinMode (Timer_0_Output_B, OUTPUT);

  TCCR0A = (1 << COM0A0) |   (1 << COM0B1) | (1 << WGM02) | (1 << WGM00) ;
  Serial.println (TCCR0A, BIN);
  TCCR0B = (1 << WGM02) | (1 << CS01) |  (1 << CS00) ;         // CS00 & CS01 : divide by 64
  Serial.println (TCCR0B, BIN);

  
  OCR0A = 180;   
  OCR0B = 60;


  //Duty cuycle 60/180 = 33.3%

  #endif

  #if (Fast_PWM_timer_1_fixed_counter)

  
  Serial.println ("Fast PWM Fixed Timer 1");

  pinMode (Timer_1_Output_A, OUTPUT);
  pinMode (Timer_1_Output_B, OUTPUT);

  TCCR1A = (1 << COM1A1) |   (1 << COM1B1) | (1 << WGM10) ;
  Serial.println (TCCR1A, BIN);
  TCCR1B = (1 << WGM12) | (1 << CS11) |  (1 << CS10) ;         // CS00 & CS01 : divide by 64
  Serial.println (TCCR1B, BIN);

  
  OCR1A = 180;   
  OCR1B = 50;

  Serial.println (OCR1A);
  Serial.println (OCR1B);
  
  

  //Duty cycle A = 180 + 1 / 255 + 1 = 70.7 %
  //Duty cycle B = 50 + 1 / 255 + 1 = 19.9 %
  
  #endif

  #if (Fast_PWM_timer_1_OCR0A_counter)

  
  Serial.println ("Fast PWM Fixed Timer 1");

  pinMode (Timer_1_Output_A, OUTPUT);
  pinMode (Timer_1_Output_B, OUTPUT);

  TCCR1A = (1 << COM1A0) |   (1 << COM1B1) | (1 << WGM11) | (1 << WGM10) ;
  Serial.println (TCCR1A, BIN);
  TCCR1B = (1 << WGM13) | (1 << WGM12) | (1 << CS11) |  (1 << CS10) ;         // CS00 & CS01 : divide by 64
  Serial.println (TCCR1B, BIN);

  
  OCR1A = 180;   
  OCR1B = 50;

  

  Serial.println (OCR1A);
  Serial.println (OCR1B);

  //Duty cuycle 50/180 = 27.8%

  
  #endif

  

}

void loop() {
  // put your main code here, to run repeatedly:

  /*
  //digitalWrite(LEDPIN, !digitalRead(LEDPIN));
  //Serial.print (12.11 * 11.02 * 23232.23232);
  
  
  PwmWidth = PwmWidth + WidthAmount;
  
  OCR0B = PwmWidth;
  Serial.println (OCR0B);

  if (PwmWidth == 0 || PwmWidth == 255)
  {
   digitalWrite(7, LOW);
   WidthAmount = -WidthAmount;
   Serial.println ("@@@@");
   Serial.println (OCR0B);
   digitalWrite(7, HIGH ); 
   }
  */
  
}


