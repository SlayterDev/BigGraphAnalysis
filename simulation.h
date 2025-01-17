#ifndef SIMUL_H
#define SIMUL_H

#include <sys/time.h>
#include <unistd.h>

void runSimulation(char *graphName);
void countNodes(int t, int *numInfected, int *numRecovered, int *numSusceptible);
int seedInfection();

#endif
