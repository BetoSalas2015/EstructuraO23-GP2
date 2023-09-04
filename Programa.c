#include <stdio.h>			//  FILE se declara aquí
#include <stdlib.h>
#include <string.h>

#define pausa system("pause")

int main()
{
	FILE *archivo;
	char nombre[30];
	char password[30];
	char car; 
	int pos = 0;

	printf("Usuario: ");
	gets(nombre);
	printf("password: ");
	
	do {
		car = getch();
		if(car == 8)
			pos--;
		else
		{
			password[pos] = car;
			pos++;
			putchar('*');
		}
	} while( car != 13);
	putchar('\n');

	archivo = fopen("pwd.dat", "w");

	fwrite(nombre, 30, 1, archivo);
	fwrite(password, 30, 1, archivo);

	fclose(archivo);

	pausa;
	return 0;
}