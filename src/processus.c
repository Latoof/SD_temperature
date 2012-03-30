#include "processus.h"


void CodeTempMeasure( void* arg ) {

	mlockall(MCL_CURRENT | MCL_FUTURE );
	FILE* w_out;

	if ( arg != NULL ) {
		w_out = (FILE*) arg;
	}


	//return 0.0;

}


int beginMeasures( char* outfile ) {
	
	RT_TASK TempMeasure;
	FILE* file = fopen(outfile,"w+");

	if ( file == NULL ) {
		printf("Error while creating/opening file %s\n", outfile);
		return -1;
	}

	if ( rt_task_spawn(&TempMeasure, "TempMeasure", 2000, 98, T_JOINABLE, &CodeTempMeasure, NULL) != 0 ) {
		printf("Impossible de créer la tâche apériodique\n");
		return 3;
	}

	/* Savoir convertir les cycles d'horloge en temps (500ms) */
	rt_task_set_periodic( &TempMeasure, TM_NOW, 3 );

	rt_task_join(&TempMeasure);


	return 0;
}