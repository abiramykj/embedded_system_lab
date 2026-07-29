#include <REGX51.H>
#include "adc.h"

sbit ALE=P3^0;
sbit START=P3^1;
sbit EOC=P3^2;
sbit OE=P3^3;

void ADC_Init(void)
{
    P1=0xFF;
}

unsigned char ADC_Read(void)
{
    ALE=1;
    START=1;
    ALE=0;
    START=0;

    while(EOC==0);

    OE=1;
    return P1;
}