/* 
 * File:   main.c
 * Author: KIMO STORE
 *
 * Created on 07 ????, 2021, 07:02 ?
 */

#include <avr/io.h>
#include <avr/interrupt.h>

#include "ALL.h"
#include "lcd.h"
#include "spi.h"
#include "UART.h"

#include "calc.h"
#include "stack for char.h"
#include "x.h"


extern struct node_int *top_int;

int main() {
    LCD_init(_4BITS);

    while (1) {
        LCD_write_num_4bits(PINC);
        return;

        //                if (PIND==0b11100000) {
        //                    LCD_write_4bits('1');
        //                    _delay_ms(1000);
        //                } else if (PIND==0b11010000) {
        //                    LCD_write_4bits('2');
        //                    _delay_ms(1000);
        //
        //                } else if (PIND==0b10110000) {
        //                    LCD_write_4bits('3');
        //                    _delay_ms(1000);
        //
        //               } else if (PIND==0b01110000) {
        //                    LCD_write_4bits('4');
        //                    _delay_ms(1000);
        //
        //                } else {
        //                }
        //            
        //            if (PORTD == 2) {
        //                if (PIND & (1 << 4)) {
        //                    LCD_write_4bits('1');
        //                    _delay_ms(1000);
        //                } else if (PIND & (1 << 5)) {
        //
        //                    LCD_write_4bits('5');
        //                    _delay_ms(1000);
        //
        //                } else if (PIND & (1 << 6)) {
        //                    LCD_write_4bits('6');
        //                    _delay_ms(1000);
        //
        //                } else if (PIND & (1 << 7)) {
        //                    LCD_write_4bits('7');
        //                    _delay_ms(1000);
        //
        //                } else {
        //                }
        //            }
        //            if (PORTD == 4) {
        //                if (PIND & (1 << 4)) {
        //                    LCD_write_4bits('8');
        //                    _delay_ms(1000);
        //                } else if (PIND & (1 << 5)) {
        //
        //                    LCD_write_4bits('9');
        //                    _delay_ms(1000);
        //
        //                } else if (PIND & (1 << 6)) {
        //                    LCD_write_4bits('10');
        //                    _delay_ms(1000);
        //
        //                } else if (PIND & (1 << 7)) {
        //                    LCD_write_4bits('11');
        //                    _delay_ms(1000);
        //
        //                } else {
        //                }
        //            }
        //            if (PORTD == 8) {
        //                if (PIND & (1 << 4)) {
        //                    LCD_write_4bits('12');
        //                    _delay_ms(1000);
        //                } else if (PIND & (1 << 5)) {
        //
        //                    LCD_write_4bits('13');
        //                    _delay_ms(1000);
        //
        //                } else if (PIND & (1 << 6)) {
        //                    LCD_write_4bits('14');
        //                    _delay_ms(1000);
        //
        //                } else if (PIND & (1 << 7)) {
        //                    LCD_write_4bits('15');
        //                    _delay_ms(1000);
        //
        //                } else {
        //                }
        //            }





    }


}
