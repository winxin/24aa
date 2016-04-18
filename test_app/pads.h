/*
    Abstraction layer for EEPROM ICs.

    Copyright (C) 2012..2016 Uladzimir Pylinski aka barthess

    This file is part of 24AA lib.

    24AA lib is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    24AA lib is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PADS_H_
#define PADS_H_

static inline void nand_wp_assert(void)   {palClearPad(GPIOB, GPIOB_NAND_WP);}
static inline void nand_wp_release(void)  {palSetPad(GPIOB, GPIOB_NAND_WP);}
static inline void red_led_on(void)       {palSetPad(GPIOI, GPIOI_LED_R);}
static inline void red_led_off(void)      {palClearPad(GPIOI, GPIOI_LED_R);}
static inline void green_led_on(void)     {palSetPad(GPIOI, GPIOI_LED_G);}
static inline void green_led_off(void)    {palClearPad(GPIOI, GPIOI_LED_G);}
static inline void nvram_power_on(void)   {palClearPad(GPIOB, GPIOB_NVRAM_PWR);}
static inline void nvram_power_off(void)  {palSetPad(GPIOB, GPIOB_NVRAM_PWR);}

#endif /* PADS_H_ */
