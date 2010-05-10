/*
 * oled.h
 *
 *  Created on: 30-apr-2010
 *      Author: guy
 */

#ifndef OLED_H_
#define OLED_H_

#define SEPS525_ 1
#define SEPS525_WIDTH	159
#define SEPS525_HEIGTH	127

/// R default 0x00
#define SEPS525_INSTRUCTION_INDEX				0x00

/// R default 0xC0
#define SEPS525_INSTRUCTION_STATUS_RD			0x01
#define SEPS525_STATUS_RD_DC0					0
#define SEPS525_STATUS_RD_DC1					1
#define SEPS525_STATUS_RD_CD					2
#define SEPS525_STATUS_RD_RD					3
#define SEPS525_STATUS_RD_SWAP					4
#define SEPS525_STATUS_RD_HV					5
#define SEPS525_STATUS_RD_VC					6
#define SEPS525_STATUS_RD_HC					7

///R/W default 0xC0
#define SEPS525_INSTRUCTION_OSC_CTL				0x02
#define SEPS525_OSC_CTL_OSCDSB					0
#define SEPS525_OSC_CTL_SELCLK					1
#define SEPS525_OSC_CTL_SELRES					6
#define SEPS525_OSC_CTL_SELEXP					7

///R/W default 0x00
#define SEPS525_INSTRUCTION_IREF				0x80
#define SEPS525_IREF							0

///R/W default 0x30
#define SEPS525_INSTRUCTION_CLOCK_DIV			0x03
#define SEPS525_CLOCK_DIV_DFR0					0
#define SEPS525_CLOCK_DIV_DFR1					1
#define SEPS525_CLOCK_DIV_DFR2					2
#define SEPS525_CLOCK_DIV_DFR3					3
#define SEPS525_CLOCK_DIV_FR0					4
#define SEPS525_CLOCK_DIV_FR1					5
#define SEPS525_CLOCK_DIV_FR2					6
#define SEPS525_CLOCK_DIV_FR3					7


void oled_init (void);
#endif /* OLED_H_ */
