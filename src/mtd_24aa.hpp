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

#ifndef MTD_24AA_HPP_
#define MTD_24AA_HPP_

#include "ch.hpp"
#include "hal.h"

#include "mtd_conf.h"
#include "mtd_base.hpp"

namespace nvram {

/**
 *
 */
class Mtd24aa : public MtdBase {
public:
  Mtd24aa(const MtdConfig &cfg, uint8_t *writebuf, size_t writebuf_size,
                                      I2CDriver *i2cp, i2caddr_t addr);
protected:
  size_t bus_write(const uint8_t *txdata, size_t len, uint32_t offset);
  size_t bus_read(uint8_t *rxbuf, size_t len, uint32_t offset);
private:
  bool wait_op_complete(void);
  msg_t i2c_read(uint8_t *rxbuf, size_t len,
                 uint8_t *writebuf, size_t preamble_len);
  msg_t i2c_write(const uint8_t *txdata, size_t len,
                  uint8_t *writebuf, size_t preamble_len);
  msg_t stm32_f1x_read_single_byte(const uint8_t *txbuf, size_t txbytes,
                                   uint8_t *rxbuf, systime_t tmo);
  I2CDriver *i2cp;
  i2caddr_t addr;
  i2cflags_t i2cflags = 0;
  uint32_t bus_clk;
};

} /* namespace */

#endif /* MTD_24AA_HPP_ */
