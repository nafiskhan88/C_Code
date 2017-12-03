
// avr-libc library includes
#include <avr/io.h>
#include <avr/interrupt.h>

#define LEDPIN 13
#define ISRPIN 7


volatile byte count = 0;
volatile byte toggle = 0;

void setup()
{

  Serial.begin(9600);

  /*
  pinMode(LEDPIN, OUTPUT);
  pinMode (ISRPIN , OUTPUT);
  volatile byte seconds;

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  Serial.begin(9600);

  // initialize Timer1
  cli();          // disable global interrupts
  TCCR1A = 0;     // set entire TCCR1A register to 0
  TCCR1B = 0;     // same for TCCR1B

  // set compare match register to desired timer count:
  OCR1A = 15624; //15624 is 1 second
  // turn on CTC mode:
  TCCR1B |= (1 << WGM12) | (1 << WGM10);   //mode 5, FAST PWM 
  // Set CS10 and CS12 bits for 1024 prescaler:
  TCCR1B |= (1 << CS10);
  TCCR1B |= (1 << CS12);
  // enable timer compare interrupt:
  TIMSK1 |= (1 << OCIE1A);
  // enable global interrupts:
  sei();
  


//generate PWM using Timer 3
  TCCR2A = _BV(COM2A1) | _BV(COM2B1) | _BV(WGM21) | _BV(WGM20);
  TCCR2B = _BV(CS22);
  OCR2A = 180;
  OCR2B = 50;

  */

  //pin output for Timer1
  

  /*
  Output compare register
  Calculation: Output A frequency: 16 MHz / 64 / 256 = 976.5625Hz
  Output A duty cycle: (180+1) / 256 = 70.7%
  
  Output B frequency: 16 MHz / 64 / 256 = 976.5625Hz
  Output B duty cycle: (50+1) / 256 = 19.9%
  */
  
  



  //setting timer 1 control register

  pinMode(5, OUTPUT);
  pinMode (6, OUTPUT);

  TCCR0A = 0;
  Serial.println (TCCR0A, BIN);
  TCCR0B = 0;
  
  TCCR0A = (1 << COM0A1)|   (1 << COM0B1) | (1 << WGM00) ;
  Serial.println (TCCR0A, BIN);
  TCCR0B = (1 << CS01) |  (1 << CS00) ;         // CS : 101 is divide by 1024
  Serial.println (TCCR0B, BIN);

  OCR0A = 180;   
  OCR0B = 50;    


  Serial.println (OCR0A, DEC);
  Serial.println (OCR0B, DEC);
  /* for timer 1 calculation will be:
   *  16M / 64 / 256 = 
   *  
  
   */

}

void loop()
{
  // do some crazy stuff while my LED keeps blinking
  
  int i;
  float a[5] = {1, 2, 3, 4, 5};
  float b[5] = {0};
 

 
  /*
  for (i = 0 ; i < 1000 ; i++)
  { 
    i = (i * 1000 )/ 1000;
    Serial.println (i);
    Serial.println ("\n");
    
  }

  */
 
 
}

ISR(TIMER1_COMPA_vect)
{
    
    count++;
    toggle++;
    
    if  (count == 1 )
    {
    digitalWrite (ISRPIN,LOW );
    digitalWrite(LEDPIN, !digitalRead(LEDPIN));
    Serial.println ("@@@");
    Serial.println (count);
    Serial.println ("Toggle \t");
    Serial.println (toggle);
    digitalWrite (ISRPIN, HIGH );
    count = 0;
    }

    if (toggle == 1)
    {
    //OCR1A = 0;
    OCR1A = 7812;
    }

    if (toggle == 2)
    {
    //OCR1A = 0;
    OCR1A = 15624;
    toggle = 0;
    }
}
