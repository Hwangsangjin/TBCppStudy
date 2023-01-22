#include "Worker.h"
#include "Timer.h"

void Worker::DoSomething()
{
	Timer timer;		// start timer

						// do some work here

	timer.Elapsed();	// end timer and report elapsed time
}
