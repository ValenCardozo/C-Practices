//Introduccion a la Algoritmica y Programacion
//Ejercicio 3 de la practica 6
//Realizado por: Cardozo, Valentin

#include<stdio.h>

int retorno; //Indica si se deben calcular 2 pasajes o no
int dias; //Cantidad de dias que ingresa el usuario previos a tomar el vuelo
int costo; //Precio total de los pasajes a comunicar al usuario

int main() {
	printf("Precio del viaje de Bs. As. hacia Rio Cuarto \n");
	printf("Con cuantos dias de anticipacion desea comprar el pasaje?: ");
	scanf("%d", &dias);
	printf("Su viaje es ida y vuelta?\n");
	printf("Ingrese 1 de ser correcto, de lo contrario 0: ");
	scanf("%d", &retorno);

	if (dias >= 30) {
		costo = 4650;
	} else if (dias <= 29 && dias >= 15) {
		costo = 5350;
	} else if (dias <= 14) {
		costo = 6875;
	}

	if (retorno == 1) {
		costo = costo * 2;
	}

	printf("El costo de su pasaje/s es: %d \n", costo);
}