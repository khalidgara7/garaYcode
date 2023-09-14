#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Ecrivez un programme C pour calculer la somme de deux valeurs entières données.
  // Si les deux valeurs sont identiques, il renvoie le triple de leur somme.

    int num1, num2, somme;

    printf("saisiez 1er nombre 1 :\n");
    scanf("%d",&num1);
    printf("saisiez 2eme nombre 2 :\n");
    scanf("%d",&num2);

    somme = num1 + num2;
     printf("la somme de deux nombre est %d",somme);

    if (num1 == num2)
    {
        somme = somme *3;
       printf("le triple de leur nombre est : %d",somme);
    }


    return 0;
}
