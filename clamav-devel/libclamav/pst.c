/*
 *  Copyright (C) 2006 Nigel Horne <njh@bandsman.co.uk>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 */
static	char	const	rcsid[] = "$Id: pst.c,v 1.2 2006/04/24 16:28:05 kojm Exp $";

#include "clamav.h"
#include "others.h"

#if HAVE_CONFIG_H
#include "clamav-config.h"
#endif

int
cli_pst(const char *dir, int desc)
{
	cli_warnmsg("PST files not yet supported\n");
	return CL_EFORMAT;
}
