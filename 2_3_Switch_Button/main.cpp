#include "mbed.h"

DigitalIn mypin(USER_BUTTON);
DigitalOut myled(LED1);

int main(void)
{
    if (mypin.is_connected()) {
        printf("mypin is connected and initialized! \n\r");
    }

    mypin.mode(PullNone);

    while (1) {
        printf("mypin has value : %d \n\r", mypin.read());
        myled = mypin;
        ThisThread::seelp_for(250ms);
    }
}