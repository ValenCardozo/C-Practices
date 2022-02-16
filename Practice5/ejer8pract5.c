//
//  ejer8pract5.c
//  C - practices
//
//  Created by Valentin Cardozo on 12/02/2022.
//

#include <stdio.h>

struct TAngulo
{
    int grado;
    int min;
    int seg;
};

struct TAngulo sumAng(struct TAngulo ang1, struct TAngulo ang2);

int main()
{
    struct TAngulo ang1, ang2, result;
    
    ang1.grado = 35;
    ang1.min = 45;
    ang1.seg = 1;
    
    ang2.grado = 35;
    ang2.min = 45;
    ang2.seg = 1;
    
    result = sumAng(ang1, ang2);
    
    printf("Suma de angulos: grados %d\n minutos %d\n segundos %d\n",
           result.grado,
           result.min,
           result.seg
           );
}

struct TAngulo sumAng(struct TAngulo ang1, struct TAngulo ang2)
{
    struct TAngulo angTotal;
    
    angTotal.grado = ang1.grado + ang2.grado;
    angTotal.min = ang1.min + ang2.min;
    angTotal.seg = ang1.seg + ang2.seg;
    
    if (angTotal.seg >= 60)
    {
        angTotal.seg = 0;
        angTotal.min++;
    }
    
    if (angTotal.min >= 60)
    {
        angTotal.min = 0;
        angTotal.grado++;
    }
    
    return angTotal;
}
