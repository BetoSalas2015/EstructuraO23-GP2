#include <stdio.h>			//  FILE se declara aqu�
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