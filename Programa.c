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
	struct persona agenda[5];


	agenda[3].edad = 25;    
	agenda[2].altura = 1.65;
	agenda[4].sexo = 4;
	
	
	pausa;
	return 0;
}