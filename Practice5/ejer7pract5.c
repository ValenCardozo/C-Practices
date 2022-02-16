//
//  ejer7pract5.c
//  C - practices
//
//  Created by Valentin Cardozo on 12/02/2022.
//

#include <stdio.h>
#include <math.h>

int inc(int x);
int cube(int a);
int par(int x);
int multi(int a, int x);
int pot(int a, int x);

int main()
{
    int i, j, increment, potency3, isPar, multiplo, potency;
    
    printf("Ingrese un numero x: ");
    scanf("%d", &i);
    printf("Ingrese un numero a: ");
    scanf("%d", &j);
    // Incrementar la variable en una unidad
    increment = inc(i);
    printf("Incrementado: %d\n", increment);
    // Realizar la potencia al cubo de la variable
    potency3 = cube(i);
    printf("Potencia al cubo: %d\n", potency3);
    // Valida si la variable es par o no
    isPar = par(i);
    printf("Es par?: %d\n", isPar);
    // Verifica si a es multiplo de x
    multiplo = multi(j, i);
    printf("Es multiplo?: %d\n", multiplo);
    // Realiza la potencia de a elevado a la x
    potency = pot(j, i);
    printf("Potencia de %d elevado a %d: %d\n", j, i, potency);
}

int inc(int x)
{
    return (x + 1);
}

int cube(int a)
{
    return pow(a, 3);
}

int par(int x)
{
    int aux;
    
    aux = x % 2;
    
    if (aux == 0)
    {
        return 1;
    }
    
    return 0;
}

int multi(int a, int x)
{
    if (a % x == 0)
    {
        return 1;
    }

    return 0;
}

int pot(int a, int x)
{
    return pow(a, x);
}
