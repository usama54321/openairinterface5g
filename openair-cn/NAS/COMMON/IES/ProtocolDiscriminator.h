/*******************************************************************************
    OpenAirInterface
    Copyright(c) 1999 - 2014 Eurecom

    OpenAirInterface is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.


    OpenAirInterface is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with OpenAirInterface.The full GNU General Public License is
   included in this distribution in the file called "COPYING". If not,
   see <http://www.gnu.org/licenses/>.

  Contact Information
  OpenAirInterface Admin: openair_admin@eurecom.fr
  OpenAirInterface Tech : openair_tech@eurecom.fr
  OpenAirInterface Dev  : openair4g-devel@eurecom.fr

  Address      : Eurecom, Compus SophiaTech 450, route des chappes, 06451 Biot, France.

 *******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "OctetString.h"

#ifndef PROTOCOL_DISCRIMINATOR_H_
#define PROTOCOL_DISCRIMINATOR_H_

#define PROTOCOL_DISCRIMINATOR_MINIMUM_LENGTH 1
#define PROTOCOL_DISCRIMINATOR_MAXIMUM_LENGTH 1

typedef uint8_t ProtocolDiscriminator;

int encode_protocol_discriminator(ProtocolDiscriminator *protocoldiscriminator, uint8_t iei, uint8_t *buffer, uint32_t len);

void dump_protocol_discriminator_xml(ProtocolDiscriminator *protocoldiscriminator, uint8_t iei);

int decode_protocol_discriminator(ProtocolDiscriminator *protocoldiscriminator, uint8_t iei, uint8_t *buffer, uint32_t len);

#endif /* PROTOCOL DISCRIMINATOR_H_ */

