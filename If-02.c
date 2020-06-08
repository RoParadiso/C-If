#include <stdio.h>

int main (){
	int numero = 1;

	printf("Ingrese el numero a verificar\n");
	scanf("%i", &numero);

	if (numero % 2 == 0)
		printf("\nEl numero %i es par.", numero);
	else
		printf("\nEl numero %i es impar.", numero);

	return 0;
}