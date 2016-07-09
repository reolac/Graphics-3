#include <windows.h>
#include <mmsystem.h>
#include "time.h"

void time::resetTime()
{
	start=(double)timeGetTime();
}

double time::currentTime()
{
	return ((double)timeGetTime())-start;
}