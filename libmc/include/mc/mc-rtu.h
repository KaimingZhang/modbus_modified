/*
 * Copyright © 2001-2011 Stéphane Raimbault <stephane.raimbault@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef _MC_RTU_H_
#define _MC_RTU_H_

#include "mc.h"

MC_BEGIN_DECLS

/* Mc_Application_Protocol_V1_1b.pdf Chapter 4 Section 1 Page 5
 * RS232 / RS485 ADU = 253 bytes + slave (1 byte) + CRC (2 bytes) = 256 bytes
 */
#define MC_RTU_MAX_ADU_LENGTH  256

mc_t* mc_new_rtu(const char *device, int baud, char parity,
                         int data_bit, int stop_bit);

#define MC_RTU_RS232 0
#define MC_RTU_RS485 1

int mc_rtu_set_serial_mode(mc_t *ctx, int mode);
int mc_rtu_get_serial_mode(mc_t *ctx);

MC_END_DECLS

#endif /* _MC_RTU_H_ */