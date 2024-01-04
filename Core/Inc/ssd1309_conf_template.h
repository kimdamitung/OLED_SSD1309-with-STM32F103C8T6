/*
 * ssd1309_conf_template.h
 *
 *  Created on: Jan 4, 2024
 *      Author: tungd
 */

#ifndef INC_SSD1309_CONF_TEMPLATE_H_
#define INC_SSD1309_CONF_TEMPLATE_H_

// Choose a microcontroller family
//#define STM32F0
#define STM32F1
//#define STM32F4
//#define STM32L0
//#define STM32L1
//#define STM32L4
//#define STM32F3
//#define STM32H7
//#define STM32F7
//#define STM32G0

// Choose a bus
#define SSD1309_USE_I2C
#define SSD1309_USE_SPI

// I2C Configuration
#define SSD1309_I2C_PORT        hi2c1
#define SSD1309_I2C_ADDR        (0x3C << 1)

// SPI Configuration
#define SSD1309_SPI_PORT        hspi1
#define SSD1309_CS_Port         OLED_CS_GPIO_Port
#define SSD1309_CS_Pin          OLED_CS_Pin
#define SSD1309_DC_Port         OLED_DC_GPIO_Port
#define SSD1309_DC_Pin          OLED_DC_Pin
#define SSD1309_Reset_Port      OLED_Res_GPIO_Port
#define SSD1309_Reset_Pin       OLED_Res_Pin

// Mirror the screen if needed
// #define SSD1309_MIRROR_VERT
// #define SSD1309_MIRROR_HORIZ

// Set inverse color if needed
// # define

// Include only needed fonts
#define SSD1309_INCLUDE_FONT_6x8
#define SSD1309_INCLUDE_FONT_7x10
#define SSD1309_INCLUDE_FONT_11x18
#define SSD1309_INCLUDE_FONT_16x26
#define SSD1309_INCLUDE_FONT_16x24
#define SSD1309_INCLUDE_FONT_128x64

// The width of the screen can be set using this
// define. The default value is 128.
 #define SSD1309_WIDTH           128

// If your screen horizontal axis does not start
// in column 0 you can use this define to
// adjust the horizontal offset
// #define SSD1309_X_OFFSET

// The height can be changed as well if necessary.
// It can be 32, 64 or 128. The default value is 64.
 #define SSD1309_HEIGHT          64

#endif /* INC_SSD1309_CONF_TEMPLATE_H_ */
