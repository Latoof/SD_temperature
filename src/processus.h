#ifndef H_PROCESSUS_H
	#define H_PROCESSUS_H

	#include <stdlib.h>
	#include <stdio.h>

	#include <sys/mman.h> /* Fonction "mlockall()" */
	#include <native/task.h> /* rt_task() */


	void CodeTempMeasure( void* arg );
	int beginMeasures( char* outfile );

	/* http://www.xenomai.org/documentation/trunk/html/api/group__pipe.html */

#endif