/* The "Hello world!" of microcontrollers. Blink LED on/off */
#include "fred_r2d.h"
#include <stdint.h>
#include "stm8.h"
//#include "stm8s_i2c.h"

/* Simple busy loop delay */
void delay(unsigned long count) {
    while (count--)
        nop();
}

/*
void display_test(){
  I2C_Cmd( ENABLE);
  I2C_Init(I2C_SPEED, I2C_SLAVE_ADDRESS7, I2C_DUTYCYCLE_2, I2C_ACK_CURR,
           I2C_ADDMODE_7BIT, 16);

}*/

int main(void)
{

    //board_setup();
    //display_test();


    //CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);
    /* Set clock to full speed (16 Mhz) */
    CLK_CKDIVR = 0;

    /* GPIO setup */
    // Set pin data direction as output
    PORT(LED_PORT, DDR)  |= LED_PIN; // i.e. PB_DDR |= (1 << 5);
    // Set pin as "Push-pull"
    PORT(LED_PORT, CR1)  |= LED_PIN; // i.e. PB_CR1 |= (1 << 5);

	while(1) {
        // LED on
        PORT(LED_PORT, ODR) |= LED_PIN; // PB_ODR |= (1 << 5);
        delay(100000L);
        // LED off
        PORT(LED_PORT, ODR) &= ~LED_PIN; // PB_ODR &= ~(1 << 5);
        delay(300000L);
    }
}