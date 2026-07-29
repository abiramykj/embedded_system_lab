#include <REGX51.H>
#include "adc.h"
#include "fan.h"

#define TEMP_THRESHOLD 30

void main()
{
    unsigned char adcValue;
    unsigned char temperature;

    ADC_Init();
    Fan_Init();

    while(1)
    {
        adcValue = 100;

        temperature = (adcValue * 100) / 255;

        if(temperature >= TEMP_THRESHOLD)
        {
            Fan_ON();
        }
        else
        {
            Fan_OFF();
        }
    }
}