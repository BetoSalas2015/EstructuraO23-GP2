#include <stdio.h>			//  FILE se declara aquí
#include <stdlib.h>

#define pausa system("pause")

int main()
{
	FILE *archivo;

	archivo = fopen("archivo.txt", "w");

	fclose(archivo);

	pausa;
	return 0;
}