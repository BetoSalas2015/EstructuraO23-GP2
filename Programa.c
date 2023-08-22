#include <stdio.h>
#include <stdlib.h>

#define pausa system("pause")


int main()
{
	const float PI = 3.14159;
	int r = 50;
	float area;
	area = PI * r * r; 
	//  Conversión y formato
	printf("'%c' y %d base 8 = %o, base 16 = %x \n", r, r, r, r);

	printf("%f y %e\n", area, area);
          
	printf("El 50%% de r es %f\n", (r*0.5) );

	printf("Aqui va una cadena => %s \n", "Saludos Programas!!!");

	//  Ancho de Campo
	printf("%f y %e\n", area, area);
	printf("%15f y %15e\n", area, area);
	printf("%15.3f y %15.3e\n", area, area);

	// Banderas
	printf("%015.3f y %e\n", area, area);
	printf("%+15.3f y %e\n", -area, area);
	printf("%-15.3f y %e\n", area, area);

	pausa;
	return 0;
}