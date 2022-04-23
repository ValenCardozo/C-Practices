//Introduccion a la Algoritmica y Programacion
//Ejercicio 7 de la practica 3
//Realizado por: Cardozo, Valentin

#include<stdio.h>
struct nadador {int numero; int tiempo;}; //Estructura que define el numero del nadador y su tiempo
struct nadador primerNad, segundNad, tercerNad; //Datos del nadador, numero y tiempo realizado
struct nadador ganadorOro, ganadorPlata, ganadorBronce; //Datos de los nadadores a informar segun su posicion

int main() {
    printf("Tiempo de nadadores\n");

    printf("Ingrese el numero del nadador y luego su tiempo en segundos: ");
    scanf("%d", &primerNad.numero);
    scanf("%d", &primerNad.tiempo);

    printf("Ingrese el numero del nadador y luego su tiempo en segundos: ");
    scanf("%d", &segundNad.numero);
    scanf("%d", &segundNad.tiempo);

    printf("Ingrese el numero del nadador y luego su tiempo en segundos: ");
    scanf("%d", &tercerNad.numero);
    scanf("%d", &tercerNad.tiempo);

    if ( primerNad.tiempo < segundNad.tiempo && primerNad.tiempo < tercerNad.tiempo) {
        ganadorOro = primerNad;
        if (segundNad.tiempo < tercerNad.tiempo) {
            ganadorPlata = segundNad;
            ganadorBronce = tercerNad;
        } else {
            ganadorPlata = tercerNad;
            ganadorBronce = segundNad;
        }
    }
    else if ( segundNad.tiempo < primerNad.tiempo && segundNad.tiempo < tercerNad.tiempo) {
        ganadorOro = segundNad;
        if (primerNad.tiempo < tercerNad.tiempo) {
            ganadorPlata = primerNad;
            ganadorBronce = tercerNad;
        } else {
            ganadorPlata = tercerNad;
            ganadorBronce = primerNad;
        }
    }
    else if ( tercerNad.tiempo < primerNad.tiempo && tercerNad.tiempo < segundNad.tiempo) {
        ganadorOro = tercerNad;
        if (primerNad.tiempo < segundNad.tiempo) {
            ganadorPlata = primerNad;
            ganadorBronce = segundNad;
        } else {
            ganadorPlata = segundNad;
            ganadorBronce = primerNad;
        }
    }

    printf("El ganador del Oro es el nadador %d con un tiempo de %d segundos\n", ganadorOro.numero, ganadorOro.tiempo);
    printf("El ganador de la Plata es el nadador %d con un tiempo de %d segundos\n", ganadorPlata.numero, ganadorPlata.tiempo);
    printf("El ganador del Bronce es el nadador %d con un tiempo de %d segundos\n", ganadorBronce.numero, ganadorBronce.tiempo);

}