#include "genTemp.h"

double rand_min_max(double min, double max) {
    	return ( rand()/(double)RAND_MAX ) * (max-min) + min;
	}
	
double getTemperature() {
	return rand_min_max( MIN_TEMP, MAX_TEMP );
}
