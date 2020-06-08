#include <stdio.h>

#define MAX_ALUMNO 20

int main (){

	char alumno[MAX_ALUMNO]
	int hora = 1;

	printf("Ingrese su nombre\n");
	scanf("%s", &alumno);
	printf("Ingrese la hora en formato militar\n");
	scanf("%i", &hora);

	if (hora >= 900 && hora <= 930)
	{
		printf("\n%s llegó en hora.", alumno);
	}
	if else (hora < 900)
	{
		printf("\n%s llegó temprano.", alumno);
	}
	if else (hora > 930)
	{
		printf("\n%s llegó tarde.", alumno);
	}

	return 0;
}