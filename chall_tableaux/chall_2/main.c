#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Écrire un programme qui demande 10 nombres entiers à l’utilisateur, les range dans un tableau avant d’en rechercher le plus grand et le plus petit.
    Afficher le tableau, ainsi que le nombre le plus petit et le plus grand.*/


        int N = 10, petit, grand, i = 0;
        int table[N];

        for (i = 0; i < N ; i++)
        {
            printf("entrer %d nombre de votre choix : \n",i+1);
            scanf("%d",&table[i]);
        }
        petit = table[0];
        grand = table[0];

        for (i = 0; i < N ; i++)
            {
                 if(table[i] > petit)
                    {
                       grand = table[i] ;
                    }
                else if (table[i] > grand)
                    {
                        petit = table[i] ;
                    }
            }


            printf("le petit nombre est : %d \n",petit);
            printf("le grand nombre est : %d",grand);





    return 0;
}
