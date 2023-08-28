#include <stdio.h>			//  FILE se declara aquí
#include <stdlib.h>
#include <string.h>

#define pausa system("pause")

int main()
{
	FILE *salida;
	char cadena[100];

	salida = fopen("archivo.txt","w");
	if( salida == NULL)
	{
		printf("Error no se pudo crear el archivo");
		pausa;
		return 1;
	}
	do {
		gets(cadena);
		fprintf(salida, "%s\n", cadena);
	} while( strcmp(cadena, "") );

	fclose(salida);

	pausa;
	return 0;
}