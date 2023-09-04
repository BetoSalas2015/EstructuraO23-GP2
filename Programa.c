#include <stdio.h>			//  FILE se declara aquí
#include <stdlib.h>
#include <string.h>

#define pausa system("pause")

struct nombre_persona
{
	char nombre[15];
	char apellido[15];
};

struct persona 
{ 
	struct nombre_persona nombre;
	int edad;
	float altura;
	char sexo;
};

int main()
{
	int costo;
	struct persona miPersona;

	miPersona.edad = 25;
 	miPersona.altura = 1.65;
	miPersona.sexo = 'H';
	//strcpy(  miPersona.nombre, "Juan Perez" );

	
	pausa;
	return 0;
}