//
//  lab1.c
//  C - practices
//
//  Created by Valentin Cardozo on 30/03/2022.
//

#include <stdio.h>
/* léxico */
int lado;
int areaCuad;
/* función principal (main) en todo programa C */
void main(){
 scanf("%d",&lado); // dir de memoria de la var lado
 areaCuad = lado * lado;
 printf("%d",areaCuad);
/* otra forma: printf("El area es: %d \n",areaCuad );*/
}
