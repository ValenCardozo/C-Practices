//
//  ejer15pract5.c
//  C - practices
//
//  Created by Valentin Cardozo on 12/02/2022.
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct carta {
    int numero;
    char palo;
};

int puntos(struct carta carta1, struct carta carta2, struct carta carta3);

int main()
{
    struct carta carta1, carta2, carta3;
    int result;

    printf("Ingrese primer carta:");
    scanf("%d:", &carta1.numero);
    scanf("%s:", carta1.palo);
    printf("Su carta es: %d %s\n", carta1.numero, carta1.palo);

    printf("Ingrese segunda carta:");
    scanf("%d:", &carta2.numero);
    scanf("%s:", carta2.palo);
    printf("Su carta es: %d %s\n", carta2.numero, carta2.palo);

    printf("Ingrese tercer carta:");
    scanf("%d:", &carta3.numero);
    scanf("%s:", carta3.palo);
    printf("Su carta es: %d %s\n", carta3.numero, carta3.palo);

    result = puntos(carta1, carta2, carta3);
    printf("Flor, Envido o Nada?: %d\n", result);
    return 0;
}

int puntos(struct carta carta1, struct carta carta2, struct carta carta3)
{
    printf("%s %s %s\n", carta1.palo, carta2.palo, carta3.palo);
    if (strcmp(&carta1.palo, &carta2.palo) == 0 && strcmp(&carta1.palo, &carta3.palo) == 0) {
        return 1;
    }

    if (carta1.palo == carta2.palo || carta1.palo == carta3.palo || carta2.palo == carta3.palo) {
        return 2;
    }

    if (carta1.palo != carta2.palo && carta1.palo != carta3.palo && carta2.palo != carta3.palo) {
        return 0;
    }

    return 9999;
}
