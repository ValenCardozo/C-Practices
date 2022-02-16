//
//  ejer4pract3.c
//  C - practices
//
//  Created by Valentin Cardozo on 07/02/2022.
//

#include <stdio.h>

int main()
{
    float ad1, ad2, costo;
    int dist, costKm, limInf, limSup;
    
    costKm = 30;
    limInf = 300;
    limSup = 1000;
    ad1 = 0.75;
    ad2 = 0.50;
    
    scanf("%d", &dist);
    
    if (dist < limInf) {
        costo = dist * costKm;
    } else {
        if (dist > limInf && dist < limSup) {
            costo = (dist * costKm) + ((dist - limInf) * ad1);
        } else {
            if (dist > limSup) {
                costo = (dist * costKm) + ((dist - limSup) * ad2);
            }
        }
    }
    
    printf("%.2f\n", costo);
}
