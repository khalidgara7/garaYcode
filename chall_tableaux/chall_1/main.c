#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Déclarer un tableau d'entiers de 10 éléments et l'initialiser avec les nombres 1 à 10.
//  Afficher le tableau en séparant les valeurs par des virgules.

     int tableau [] = {1,2,3,4,5,6,7,8,9,10};
    int i ;

     for (i = 0; i < 10; i++)
     {
          printf("%d\n", tableau[i]);
     }




    return 0;
}
