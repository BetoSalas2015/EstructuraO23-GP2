#include <stdio.h>			//  FILE se declara aquí
#include <stdlib.h>

#define pausa system("pause")

int main()
{
	FILE *leer, *escribir;
	char cadena[80];

	leer = fopen("Programa.c", "r");
	if( leer == NULL )
	{
		printf("Error: El archivo no se encontro. \n");
		pausa;
		return 1;
	}
	escribir = fopen("Copia de Programa.c", "w");
	if( escribir == NULL )
	{
		printf("Error: El archivo no se encontro. \n");
		pausa;
		return 1;
	}
	//  0 = false, cualquier otra cosa = true 
	while( !feof(leer) )
	{
		fgets(cadena,80,leer);
		printf("%s", cadena);
		fprintf(escribir,cadena);
	}

	fclose(leer);
	fclose(escribir);

	pausa;
	return 0;
}