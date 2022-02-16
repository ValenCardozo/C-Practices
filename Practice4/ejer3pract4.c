//
//  ejer3pract4.c
//  C - practices
//
//  Created by Valentin Cardozo on 11/02/2022.
//

#include <stdio.h>

int main()
{
    char password, reEntry;
    int cond;
    
    cond = 1;
    printf("Ingrese una contraseña:\n");
    scanf("%c", &password);

    while (cond == 1) {
        printf("Ingrese nuevamente la contraseña:\n");
        reEntry = getchar();
        
        if (password == reEntry) {
            printf("Su contraseña es correcta");
            cond = 0;
        }
    }
}
