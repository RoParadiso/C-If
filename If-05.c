#include <stdio.h>

int main (){

	int agua = -1;
	int verduras = 1;
	int condimentos = 2;
	int caldo = 3;

	printf("¿Tenes agua?\n");
	printf("Ingresa [1] para SI y [2] para NO\n");
	scanf("%i", &agua);
	printf("Tenes verduras?\n");
	printf("Ingresa [1] para SI y [2] para NO\n");
	scanf("%i", &verduras);

	if (agua == 1 && verduras == 1)
	{
		printf("\n¿Tenes condimentos?\n");
		printf("Ingresa [1] para SI y [2] para NO\n");
		scanf("%i", &condimentos);
		if (condimentos == 1)
		{
			printf("\n¡Todo listo!");
		}
		else
		{
			printf("¿Tenes caldo?\n");
		}
			if (caldo == 1)
			{
				printf("\nTodo listo!");
			}
			else
			{
				printf("\nHoy no hay sopa");
			}
		}
	}
	else
		{
			printf("\nHoy no hay sopa");
		}


	return 0;
}