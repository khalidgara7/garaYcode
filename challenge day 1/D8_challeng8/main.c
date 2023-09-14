#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Écrivez un programme C pour afficher la valeur équivalente en octal et en hexadécimal.
   // Entrez un nombre entier et affichez sa valeur équivalente en octal et en hexadécimal.

    nt nombre, octal, hexadecimal;
    printf("entrer un nombre entier : \n");
    scanf("%d",&nombre);

    printf("la valeur equivalent le %d en octal est :%o \n",nombre, nombre);  // %o for transform to octal
    printf("la valeur equivalent le %d en hexadecimal est :%x \n",nombre, nombre); // %x for transform to hexadecimal

    return 0;
}
