/* The "Hello world!" of microcontrollers. Blink LED on/off */
#include <stdint.h>
#include "stm8.h"
#include "stm8s_i2c.h"


/* Build in LED is in pin B5 (STM8S103 board) or D3 (STM8S003F3 board) */
#ifdef STM8S103
#define LED_PORT    PA
#define LED_PIN     PIN1
#else
#define LED_PORT    PA
#define LED_PIN     PIN1
#endif

/* Simple busy loop delay */
void delay(unsigned long count) {
    while (count--)
        nop();
}

int main(void)
{
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