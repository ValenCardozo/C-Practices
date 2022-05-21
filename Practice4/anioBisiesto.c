
#include <stdio.h>
#include <string.h>

int anio;
int esBisiesto(int anio);
int response;
char message[14];

int main()
{
    scanf("%d", &anio);

    strcpy(message, "No es bisiesto");
    if (esBisiesto(anio) == 1) {
        strcpy(message, "Es bisiesto");
    }

    printf("\n El año %d %s", anio, message);
}

int esBisiesto(int anio) {
    int resp;

    resp = 0;
    if (((anio % 4) == 0 && (anio % 100) != 0) || (anio % 400) == 0) {
        resp = 1;
    }

    return resp;
}