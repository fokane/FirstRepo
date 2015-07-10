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
    LATBbits.LATB0 = 0;
    TRISBbits.TRISB0 = 0;
    
    while(1);
    return 0;
}
