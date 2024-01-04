/*
 * ssd1309_tests.h
 *
 *  Created on: Jan 4, 2024
 *      Author: tungd
 */

#ifndef INC_SSD1309_TESTS_H_
#define INC_SSD1309_TESTS_H_

#include <_ansi.h>

_BEGIN_STD_C

void ssd1309_TestBorder(void);
void ssd1309_TestFonts1(void);
void ssd1309_TestFonts2(void);
void ssd1309_TestFPS(void);
void ssd1309_TestAll(void);
void ssd1309_TestLine(void);
void ssd1309_TestRectangle(void);
void ssd1309_TestRectangleFill();
void ssd1309_TestCircle(void);
void ssd1309_TestArc(void);
void ssd1309_TestPolyline(void);
void ssd1309_TestDrawBitmap(void);

_END_STD_C

#endif /* INC_SSD1309_TESTS_H_ */
