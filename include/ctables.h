/*       +------------------------------------+
 *       | Inspire Internet Relay Chat Daemon |
 *       +------------------------------------+
 *
 *  Inspire is copyright (C) 2002-2003 ChatSpike-Dev.
 *                       E-mail:
 *                <brain@chatspike.net>
 *           	  <Craig@chatspike.net>
 *     
 * Written by Craig Edwards, Craig McLure, and others.
 * This program is free but copyrighted software; see
 *            the file COPYING for details.
 *
 * ---------------------------------------------------
 
 $Log$
 Revision 1.2  2003/01/26 23:52:59  brain
 Modified documentation for base classes
 Added base classes

 Revision 1.1.1.1  2003/01/23 19:45:58  brain
 InspIRCd second source tree

 Revision 1.3  2003/01/15 22:47:44  brain
 Changed user and channel structs to classes (finally)

 Revision 1.2  2003/01/09 21:09:50  brain
 added '/stats M' command

 Revision 1.1  2003/01/07 01:02:14  brain

 definitions for command table types


 * ---------------------------------------------------
 */
#include "inspircd_config.h"
#include "inspircd.h"
#include "base.h"

#ifndef __CTABLES_H__
#define __CTABLES_H__

typedef void (handlerfunc) (char**, int, userrec*);

/* a structure that defines a command */

class command_t : public classbase
{
 public:
	char command[MAXBUF]; /* command name */
	handlerfunc *handler_function; /* handler function as in typedef */
	char flags_needed; /* user flags needed to execute the command or 0 */
	int min_params; /* minimum number of parameters command takes */
	long use_count; /* used by /stats m */
	long total_bytes; /* used by /stats m */
};

#endif

