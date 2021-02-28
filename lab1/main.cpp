#include "mbed.h"

DigitalOut myled1(LED1);
DigitalOut myled3(LED3);

int main()
{
   myled1 = 0;
   myled3 = 0;
   while (true)
   {
      for(int i=0; i<3; i++){
          myled3 = 1;
          ThisThread::sleep_for(800ms);
          myled3 = 0;
          ThisThread::sleep_for(800ms);
      }
      for(int i=0; i<2; i++){
          myled1 = 1;
          ThisThread::sleep_for(800ms);
          myled1 = 0;
          ThisThread::sleep_for(800ms);
      }
   }
}