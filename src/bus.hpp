/*
    Abstraction layer for EEPROM ICs.

    Copyright (C) 2012,2013,2014 Uladzimir Pylinski aka barthess

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

#ifndef NVRAM_BUS_HPP_
#define NVRAM_BUS_HPP_

#include "ch.hpp"
#include "hal.h"

namespace nvram {

/**
 *
 */
class Bus {
public:
  virtual msg_t exchange(const uint8_t *txbuf, size_t txbytes,
                               uint8_t *rxbuf, size_t rxbytes) = 0;
};

} /* namespace */

#endif /* NVRAM_BUS_HPP_ */