#include <stdio.h>
#include <stdlib.h>

int main()
{
   //  Écrire un programme qui demande 10 nombres entiers à l’utilisateur, les range dans un tableau et les trie de plus grand au plus petit.

    int   i, j, temp ;

        int table[10];

        for (i = 0; i < 10 ; i++)
        {
            printf("entrer %d nombre de votre choix : \n",i+1);
            scanf("%d",&table[i]);
        }

        for (i=0; i < 10; i++)
            {
            for (j = i+1; j < 9; j++)
                {
                    if(table[i] < table[j])
                    {
                        temp = table[i];
                             table[i] = table[j];
                             table[j] = temp ;
                    }

                }
            }

printf("trie est :");
            for (i=0; i < 10; i++)
                {
                printf("\n %d",table[i]);
                }




    return 0;
}
