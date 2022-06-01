//
//  ejer9pract6.c
//
//  Este programa tiene como fin validar si un punto en el plano cartesiano se encuentra dentro de una circunferencia.
//
//  C - practices
//
//  Created by Valentin Cardozo on 01, June 2022.
//

#include <stdio.h>
#include <math.h>

typedef struct{
    float x,y;
} TPunto;

typedef struct{
    TPunto punto;
    float radio;
} TCirculo;

void obtenerPunto(TPunto *punto);
void obtenerCircunferencia(TCirculo *circulo);
int dentroDelCirculo(TPunto punto, TCirculo circulo);
void mostrarResultado(int resp);

int main( int argc, char **argv ) {
    TPunto punto;
    TCirculo circunf;
    int resp;

    obtenerPunto(&punto);
    obtenerCircunferencia(&circunf);
    resp = dentroDelCirculo(punto, circunf);
    mostrarResultado(resp);
    return 0;
}

void obtenerPunto(TPunto *punto) {
    printf("Se solicitan las coordenas del punto a validar: \n");
    printf("Ingrese el valor de x: \n");
    scanf("%f", &(punto->x));
    printf("Ingrese el valor de y: \n");
    scanf("%f", &(punto->y));
}

void obtenerCircunferencia(TCirculo *circulo) {
    printf("Se solicita el centro de la circunferencia y su radio: \n");
    printf("Ingrese el valor del centro: \n");
    obtenerPunto(&circulo->punto);
    printf("Ingrese el valor del radio: \n");
    scanf("%f", &(circulo->radio));
}

int dentroDelCirculo(TPunto punto, TCirculo circulo) {
    int cat1, cat2, hipot, resp;
    resp = 0;
    cat1 = pow(punto.x - circulo.punto.x, 2);
    cat2 = pow(punto.y - circulo.punto.y, 2);
    hipot = sqrt(cat1 + cat2);

    if (hipot < circulo.radio) {
        resp = 1;
    }

    return resp;
}

void mostrarResultado(resp) {
    if (resp == 1) {
        printf("El punto se encuentra dentro de la circunferencia. \n");
    } else {
        printf("El punto no se encuentra dentro de la circunferencia. \n");
    }
}
