#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* �crire un programme C qui lit un entier puis d�termine s'il est premier ou non.
    On rappelle qu'un entier est dit premier s'il a exactement deux diviseurs diff�rents; 1 et lui-m�me.
    Ex: 2, 3, 7, 17, 101 sont tous premiers, et 4, 10, 27 ne le sont pas.*/

    int numb, i, p;
    printf("entrer un nmbre entier  :");
    scanf("%d",&numb);
    p = 1;
     for(i = 2; i<= numb/2; i++) //
     {
         if(numb%i == 0) // qoutient numb sur i=2
         {
              p = 0;
             break; // l'arr�t� l'excution de la bocle
         }
     }
         if(p == 1)
           printf("premier");
         else
            printf("non premier");


    return 0;
}
