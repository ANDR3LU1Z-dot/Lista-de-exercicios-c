#include <stdlib.h>
#include <stdio.h>

int main(){

	int sub = 20, desc = 11;
	int dia = 0;
	int totalDias = 0;

	dia = sub - desc;

	totalDias = 1800 / dia;

	printf("A aranha chegara no topo da parede %d dias", totalDias);

	return 0;
}
