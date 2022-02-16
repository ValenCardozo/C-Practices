//
//  ejer4pract4.c
//  C - practices
//
//  Created by Valentin Cardozo on 11/02/2022.
//

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d\n", &n);
    int fibo[n];

    if (n >= 0)
    {
        fibo[0] = 0;
        printf("%d\n", fibo[0]);
        fibo[1] = 1;
        printf("%d\n", fibo[1]);

        for (i = 2; i <= (n - 1); i++)
        {
            printf("Numero de iteracion: %d\n", i);
            fibo[i] = fibo[i-2] + fibo[i-1];
            printf("Numero de fibonacci: %d\n", fibo[i]);
        }
    }
    
}
