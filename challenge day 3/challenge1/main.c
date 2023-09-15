#include <stdio.h>
#include <stdlib.h>

int main()
{
       /*  Challenge 2: pyramide d'étoile
                  *
                 ***
                *****
               *******
    Écrire le programme pour avoir un pyramide d'étoile, le nombre des lignes à composer est demandé à l’utilisateur.
    (chaque ligne doit avoir un nombre premier d'étoiles.*/

     int i, n, j;
     int nbr_esp, nbr_etoil;


     printf("entrere un nombre  :\n");
     scanf("%d",&n);

    nbr_esp = n-1 ;
    nbr_etoil = 1 ;
     for (i = 0; i < n; i++)
     {
       for(j = 0; j < nbr_esp; j++)
       {
           printf(" ");
       }
       for(j = 0; j < nbr_etoil; j++)
       {
           printf("*");
       }
       printf("\n");
       nbr_esp --;
       nbr_etoil += 2;
     }





    return 0;
}
