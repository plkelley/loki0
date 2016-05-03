/* 
 * File:   timer.c
 * Author: gvanhoy/kelley
 * Kelley: filled in the TODO portions
 * Created on August 27, 2015, 3:26 PM
 */

#include <xc.h>

void initTimer1(){
    //TODO: Initialize Timer 1 to have a period of
    // 1 second. Enable its interrupt
    TMR1 = 0;            //init TMR1 at 0
    PR1 = 39062;         //init PR1
    T1CONbits.TCKPS = 3; //pre-scalar
    IEC0bits.T1IE = 1;   //interrupt
    IFS0bits.T1IF = 0;   //put flag down
    IPC1bits.T1IP = 7;   //Interrupt Priority
    T1CONbits.TCS = 0;   //oscillartor
    T1CONbits.TON = 1;   //Timer on
}
/**/
initTimer2(){ //debouncing
    TMR2 = 0;  //init TMR2 at 0
    T2CONbits.TCKPS = 0;
    T2CONbits.TCKPS = 0;
    IFS0bits.T2IF = 0;
}

delayMS(unsigned int delay){
    TMR2 = 0;
    PR2 = delay*624;
    
}