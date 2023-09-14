#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   // Ecrire un programme C qui affiche d'une manière aléatoire un des jours de la semaine.

   int numb ;
    srand(time(NULL));
     numb = rand()%7 + 1;
     switch(numb)
     {
         case 1 : printf("lundi");break;
         case 2 : printf("mardi"); break;
         case 3 : printf("mercredi"); break;
         case 4 : printf("jeudi"); break;
         case 5 : printf("vendredi"); break;
         case 6 : printf("samedi"); break;
         case 7 : printf("dimanche"); break;
     }
    return 0;
}
