/*
 * File:   main.c
 * Author: Fergus
 *
 * Created on 09 July 2015, 19:39
 */


#include <xc.h>
#include <stdint.h>

int32_t main(void) 
{
    LATBbits.LATB1 = 0;
    TRISBbits.TRISB1 = 0;
    
    while(1);
    return 0;
}
