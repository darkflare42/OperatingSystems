#include <sys/time.h>
#include "osm.h"

timeMeasurmentStructure measureTimes(unsigned int numOfIterations)
{
	timeMeasurmentStructure finalTimes;
	return finalTimes;
}

double osm_function_time(unsigned int osm_iterations=50000)
{
	//timestruct t = gettimeofday();
	
	for (int i = 0; i < osm_iterations; i += 5)
	{
		foo();
		foo();
		foo();
		foo();
		foo();
	}
	//time struct t2 = gettimeofday();
	//return (t2 - t)/10000;
}

double osm_syscall_time(unsigned int osm_iterations=50000)
{
	//timestruct t = gettimeofday();
	
	for (int i = 0; i < osm_iterations; i += 5)
	{
		OSM_NULLSYSCALL
	}
	//time struct t2 = gettimeofday();
	//return (t2 - t)/10000;
}

void foo()
{
	//do nothing;
}