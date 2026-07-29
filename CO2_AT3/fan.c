#include <REGX51.H>
#include "fan.h"

sbit FAN=P2^0;

void Fan_Init(void)
{
    FAN=0;
}

void Fan_ON(void)
{
    FAN=1;
}

void Fan_OFF(void)
{
    FAN=0;
}