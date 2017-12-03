// Arduino timer CTC interrupt example
// www.engblaze.com

// avr-libc library includes
#include <avr/io.h>
#include <avr/interrupt.h>

#define LEDPIN 13
#define ISRPIN 7

volatile byte count = 0;
volatile byte toggle = 0;

void setup()
{
  pinMode(LEDPIN, OUTPUT);
  pinMode (ISRPIN , OUTPUT);
  volatile byte seconds;
  
  
  Serial.begin(9600);

  // initialize Timer1
  cli();          // disable global interrupts
  TCCR1A = 0;     // set entire TCCR1A register to 0
  TCCR1B = 0;     // same for TCCR1B

  // set compare match register to desired timer count:
  OCR1A = 15624; //15624 is 1 second
  // turn on CTC mode:
  TCCR1B |= (1 << WGM12);
  // Set CS10 and CS12 bits for 1024 prescaler:
  TCCR1B |= (1 << CS10);
  TCCR1B |= (1 << CS12);
  // enable timer compare interrupt:
  TIMSK1 |= (1 << OCIE1A);
  // enable global interrupts:
  sei();

  
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
