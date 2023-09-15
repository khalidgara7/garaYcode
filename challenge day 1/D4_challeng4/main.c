#include <stdio.h>
#include <stdlib.h>

int main()
{
      /* Moyenne et somme de 4 nombres
    Écrivez un programme en C pour trouver la somme et la moyenne de quatre nombres. Prenez les entrées de
    l'utilisateur final. Explication : Soit trois nombres a, b et c alors, Somme = (a+b+c) et, Moyenne = somme/3 */

        float nombre_1, nombre_2, nombre_3, nombre_4;
        float somme , moyenne;

        printf("entrer le nombre 1 : \n");
        scanf("%f",&nombre_1);
        printf("entrer le nombre 2 : \n");
        scanf("%f",&nombre_2);
        printf("entrer le nombre 3 : \n");
        scanf("%f",&nombre_3);
        printf("entrer le nombre 4 : \n");
        scanf("%f",&nombre_4);

        somme = nombre_1 + nombre_2 + nombre_3 + nombre_4;
        moyenne = somme / 4;

        printf("la somme de quatre nombre est : %.2f \n",somme);
        printf("la moyenne de quatre nombre est : %.2f",moyenne);
    return 0;
}
