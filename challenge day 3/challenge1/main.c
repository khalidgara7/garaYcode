#include <stdio.h>
#include <stdlib.h>

int main()
{
       /*  Challenge 2: pyramide d'�toile
                  *
                 ***
                *****
               *******
    �crire le programme pour avoir un pyramide d'�toile, le nombre des lignes � composer est demand� � l�utilisateur.
    (chaque ligne doit avoir un nombre premier d'�toiles.*/

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
