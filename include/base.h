/*

$Log$
Revision 1.1  2003/01/26 23:52:59  brain
Modified documentation for base classes
Added base classes


*/

#include "inspircd_config.h" 
#include <time.h>
 
#ifndef __BASE_H__ 
#define __BASE_H__ 
 
class classbase
{
 public:
	time_t age;

	classbase() { age = time(NULL); }
	~classbase() { }
};

#endif

