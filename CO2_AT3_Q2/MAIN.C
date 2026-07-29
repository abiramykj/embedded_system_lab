#include <REGX51.H>

sbit LED = P2^0;

void delay()
{
    unsigned int i,j;
    for(i=0;i<300;i++)
        for(j=0;j<1275;j++);
}

void main()
{
    P2 = 0x00;          // Initialize Port 2

    while(1)
    {
        // Register Manipulation
        P2 = 0x00;
        delay();

        // Bitwise OR - Set Bit 0
        P2 |= 0x01;
        delay();

        // Bitwise AND - Check Bit 0
        if(P2 & 0x01)
            LED = 1;
        else
            LED = 0;
        delay();

        // Bitwise XOR - Toggle Bit 0
        P2 ^= 0x01;
        delay();

        // Bitwise NOT - Invert all bits
        P2 = ~P2;
        delay();

        // Clear all bits
        P2 = 0x00;
        delay();
    }
}