#include <stdio.h>
#include <stdlib.h>

int main()
{
   // �crivez un programme C pour afficher la valeur �quivalente en octal et en hexad�cimal.
   // Entrez un nombre entier et affichez sa valeur �quivalente en octal et en hexad�cimal.

    nt nombre, octal, hexadecimal;
    printf("entrer un nombre entier : \n");
    scanf("%d",&nombre);

    printf("la valeur equivalent le %d en octal est :%o \n",nombre, nombre);  // %o for transform to octal
    printf("la valeur equivalent le %d en hexadecimal est :%x \n",nombre, nombre); // %x for transform to hexadecimal

    return 0;
}
