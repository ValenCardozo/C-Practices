//
//  patioBaldosas.c
//  C - practices
//
//  Created by Valentin Cardozo on 30/03/2022.
//

#include <stdio.h>
/* léxico */
float ladoCeramico, largoPatio, anchoPatio, areaPatio,
areaCeramico, cantCeramicos;
/* función principal (main) en todo programa C */
void main(){
 printf("Ingrese el lado del ceramico (metros): ");
 scanf("%f",&ladoCeramico);
 printf("Ingrese el largo del patio (metros): ");
 scanf("%f",&largoPatio);
 printf("Ingrese el ancho del patio (metros): ");
 scanf("%f",&anchoPatio);
 areaCeramico = ladoCeramico * ladoCeramico;
 areaPatio = largoPatio * anchoPatio;
 cantCeramicos = areaPatio / areaCeramico;
 printf("La cantidad de ceramicos es: %f",cantCeramicos);
}
