//Introduccion a la Algoritmica y Programacion
//Ejercicio 11 de la practica 3
//Realizado por: Cardozo, Valentin

#include<stdio.h>
#include<string.h>

int mes;
char mensaje[21];

void main(){
	printf("Ingrese el numero perteneciente a un mes del año (no bisiesto): ");
	scanf("%d", &mes);

	if ( mes  = 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
		strcpy(mensaje, "El mes tiene 31 dias");
	}
	else if ( mes == 4 || mes == 6 || mes == 9 || mes == 11) {
		strcpy(mensaje, "El mes tiene 30 dias");
	}
	else if ( mes == 2 ){
		strcpy(mensaje, "El mes tiene 28 dias");
	}

	printf("%s\n", mensaje);
}