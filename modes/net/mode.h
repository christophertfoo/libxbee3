#ifndef __XBEE_MODE_MODE_H
#define __XBEE_MODE_MODE_H

/*
  libxbee - a C library to aid the use of Digi's XBee wireless modules
            running in API mode (AP=2).

  Copyright (C) 2009  Attie Grande (attie@attie.co.uk)

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

struct xbee_modeNetInfo {
	char *host;
	int port;
	int fd;
	FILE *f;
	
	size_t txBufSize;
	struct xbee_buf *txBuf;
};

struct xbee_modeData {
	struct xbee_modeNetInfo netInfo;

	struct xbee_con *bc_conValidate;
	struct xbee_con *bc_conSleep;
	struct xbee_con *bc_conSettings;
	struct xbee_con *bc_conNew;
	struct xbee_con *bc_conEnd;
	struct xbee_con *bc_conGetTypes;
	struct xbee_con *bc_echo;
};

#endif /* __XBEE_MODE_MODE_H */

