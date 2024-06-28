/*
 * Port & Pin Definitions for FRED R2D Board V1.0
 * As well as I2C and other board-specific defines
 */

#ifndef _FRED_R2D_H
#define _FRED_R2D_H

#define DISPLAY_WRITE_ADDRESS1        0x50

// ******** LED ******** //
#define LED_PORT    PA
#define LED_PIN     PIN1

/* ******** I2C Display  ******** 
IC: SSD1306
Size: 0.9 inch
Resolution: 128 X 32 pixels
******************************* */

#define SSD1306_I2C 		I2C
#define SSD1306_I2C_CLK 	CLK_PERIPHERAL_I2C

#define SSD1306_SCL_PORT    PB
#define SSD1306_SCL_PIN     PIN4
#define SSD1306_SDA_PORT    PB
#define SSD1306_SDA_PIN     PIN5

// ******** R2D ******** //
#define R2D_TRACKING_FAULT_PORT PA
#define R2D_TRACKING_FAULT_PIN  PIN2

#define R2D_RST_PORT    PC

#define R2D_SPI_SS_PORT PA
#define R2D_SYS_CLK_PORT    PC
#define R2D_SPI_SCK_PORT    PC
#define R2D_SPI_MOSI_PORT   PC
#define R2D_SPI_MISO_PORT   PC

#define R2D_RST_PIN     PIN3

#define R2D_SPI_SS_PIN  PIN3
#define R2D_SYS_CLK_PIN     PIN4
#define R2D_SPI_SCK_PIN     PIN5
#define R2D_SPI_MOSI_PIN    PIN6
#define R2D_SPI_MISO_PIN    PIN7

#define R2D_A0_PORT     PD
#define R2D_A1_PORT     PD
#define R2D_RES0_PORT   PD
#define R2D_RES1_PORT   PD
#define R2D_SAMPLE_PORT PD

#define R2D_A0_PIN      PIN2
#define R2D_A1_PIN      PIN3
#define R2D_RES0_PIN    PIN4
#define R2D_RES1_PIN    PIN5
#define R2D_SAMPLE_PIN  PIN6

// Functions

void board_setup(void);

#endif