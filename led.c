/* 
 * File:   led.c
 * Author: gvanhoy/kelley
 * kelley: filled in the TODO portions
 * Created on August 27, 2015, 3:15 PM
 */

#include <xc.h>
#include "led.h"

#define ON 1
#define OFF 0


void initLEDs(){
    //TODO: Initialize LEDs to off
    TRISDbits.TRISD0 = OFF;
    TRISDbits.TRISD1 = OFF;
    TRISDbits.TRISD2 = OFF;
}

void turnOnLED(int led){
    if(led == 1){
        LATDbits.LATD0 = ON;
        LATDbits.LATD0 = OFF;
        LATDbits.LATD0 = OFF;
    }
    else if(led == 2){
        LATDbits.LATD0 = OFF;
        LATDbits.LATD0 = ON;
        LATDbits.LATD0 = OFF;
    }
    else{
        LATDbits.LATD0 = OFF;
        LATDbits.LATD0 = OFF;
        LATDbits.LATD0 = ON;
    }
}