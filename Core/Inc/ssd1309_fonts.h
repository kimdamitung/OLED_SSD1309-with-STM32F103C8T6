/*
 * ssd1309_fonts.h
 *
 *  Created on: Jan 4, 2024
 *      Author: tungd
 */
#include <stdint.h>

#ifndef INC_SSD1309_FONTS_H_
#define INC_SSD1309_FONTS_H_

#include "ssd1309_conf_template.h"

typedef struct {
	const uint8_t FontWidth;    /*!< Font width in pixels */
	uint8_t FontHeight;   /*!< Font height in pixels */
	const uint16_t *data; /*!< Pointer to data font data array */
} FontDef;

#ifdef SSD1309_INCLUDE_FONT_6x8
extern FontDef Font_6x8;
#endif
#ifdef SSD1309_INCLUDE_FONT_7x10
extern FontDef Font_7x10;
#endif
#ifdef SSD1309_INCLUDE_FONT_11x18
extern FontDef Font_11x18;
#endif
#ifdef SSD1309_INCLUDE_FONT_16x26
extern FontDef Font_16x26;
#endif
#ifdef SSD130_INCLUDE_FONT_16x24
extern FontDef Font_16x24;
#endif

#endif /* INC_SSD1309_FONTS_H_ */
