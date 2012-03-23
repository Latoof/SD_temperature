#include <stdio.h>
#include <stdlib.h>

#include <sys/mman.h> /* Fonction "mlockall()" */
#include <native/task.h> /* rt_task() */


double rand_min_max(double min, double max) {
    	return ( rand()/(double)RAND_MAX ) * (max-min) + min;
	}
	
double getTemperature() {
	return rand_min_max( MIN_TEMP, MAX_TEMP );
}

int main( int argc, char** argv ) {
	

	return 0;
}