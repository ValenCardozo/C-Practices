#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Lexico
const int edadMinima = 18;
int edad;
char mensaje[19];

int main() {
	// Entrada
	printf("Ingrese la edad: ");
	scanf("%d", &edad);

	strcpy(mensaje, "eres menor de edad");
	if (edad >= 18) {
		strcpy(mensaje, "eres mayor de edad");
	}

	//Salida
	printf("%s\n",mensaje);
}