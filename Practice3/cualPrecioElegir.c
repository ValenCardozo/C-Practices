//Introduccion a la Algoritmica y Programacion
//Ejercicio 2 de la practica 3
//Realizado por: Cardozo, Valentin


#include<stdio.h>
#include<string.h>
//Lexico
int preciOficial, precioAlter, mejorPrecio;

int main() {
	//Entrada
	printf("Ingrese precio de la tienda oficial: ");
	scanf("%d", &preciOficial);
	printf("Ingrese precio de la tienda alternativa: ");
	scanf("%d", &preciOficial);

	preciOficial = preciOficial + preciOficial * 0.1; //Suma del envio al precio

	mejorPrecio = preciOficial;
	if (preciOficial >= precioAlter) {
		mejorPrecio = precioAlter;
	}

	//Salida
	return mejorPrecio;
}
