//
//  ejer2pract4.c
//  C - practices
//
//  Created by Valentin Cardozo on 10/02/2022.
//

#include <stdio.h>

int main ()
{
    int numbers[100];
    int i, k;
    char size;
    
    i = 1;
    k = 1;
    
    while (i <= 100) {
        if (i%6 == 0) {
            if (i%4 == 0) {
                numbers[k] = i;
                printf("%d\n", i);
                k = k + 1;
            }
        }
        i = i + 1;
        printf("%d\n", i);
    }
}
