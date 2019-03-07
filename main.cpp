#include "mbed.h"

PwmOut mypwm_L(PA_1); 
PwmOut mypwm_R(PC_7);

//first
DigitalOut L_NA(PB_0,1);
DigitalOut L_NB(PC_1,0);

//second
DigitalOut R_NB(PB_6,0);
DigitalOut R_NA(PA_7,1);


int main() {
    //L_NA = 1;
    //L_NB = 0;
    //
    //R_NA = 1;
    //R_NB = 0;
    //
    mypwm_L.period(0.0005);  
    mypwm_R.period(0.0005);
    //mypwm.pulsewidth_ms(2); 
    //mypwm_L.write(0.5); 
    //mypwm_R.write(0.5); 
    mypwm_L = 0.2;
    mypwm_R = 0.2;
    printf("pwm L to %f\n", mypwm_L.read());
    printf("pwm R to %f\n", mypwm_R.read());
    
    /*
    printf("L_NA: %s\n",L_NA.read());
    printf("L_NB: %s\n",L_NB.read());
    
    printf("R_NA: %s\n",R_NA.read());
    printf("R_NB: %s\n",R_NB.read());
    */
    
}
