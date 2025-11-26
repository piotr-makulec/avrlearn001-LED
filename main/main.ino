//Piotr Makulec, 2025
//Written for and tested on Arduino (ATmega328p).

#include <avr/io.h>
#include <util/delay.h>


#define LED_PIN (1 << PB5)          //pin PB5 connected the the Arduino internal LED
#define LED_ON PORTB |= LED_PIN     //set the LED pin HIGH
#define LED_OFF PORTB &= ~LED_PIN   //set the LED pin LOW
#define LED_TOG PORTB ^= LED_PIN    //change the state of the LED pin

int main(void){
        DDRB |= LED_PIN;            //set the LED pin as output
        while(1){
                /*  Switching on and then switching off
                 * LED_ON;
                _delay_ms(1000);
                LED_OFF;
                _delay_ms(1000);
                */
                LED_TOG;            //Alternative method, toggling the LED state
                _delay_ms(1000);    //wait a second
        }
        return 0;
}
