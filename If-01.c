#include <stdio.h>

const int MAX_NOMBRE = 20;
const int MAX_CLAVE = 30;

int main (){

	char registro [MAX_NOMBRE];
	char clave_registro [MAX_CLAVE];
	char usuario [MAX_NOMBRE];
	char clave_usuario [MAX_CLAVE];

	printf("Registre su nombre de usuario\n");
	scanf("%s", &registro);
	printf("Cree su clave\n");
	scanf("%s", &clave_registro);
	printf("Ingrese su nombre de usuario\n");
	scanf("%s", &usuario);
	printf("Ingrese su clave\n");
	scanf("%s", &clave_usuario);

	if (registro == usuario) && (clave_usuario == clave_registro)
		printf("Bienvenido %s", usuario);
	else
		printf("Error: clave y/o usuario incorrectos.");

	return 0;
}