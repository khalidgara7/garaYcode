#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* Écrire un programme C qui lit un entier puis détermine s'il est premier ou non.
    On rappelle qu'un entier est dit premier s'il a exactement deux diviseurs différents; 1 et lui-même.
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
             break; // l'arrété l'excution de la bocle
         }
     }
         if(p == 1)
           printf("premier");
         else
            printf("non premier");


    return 0;
}
