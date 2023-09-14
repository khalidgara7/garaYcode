#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Ecrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle
    // ou non en utilisant l'instruction switch case.
     char caracter;

     printf("veuilliez saisie un caractere : \n");
     scanf("%c",&caracter);

     switch (caracter)
     {
         case 'a' : printf("le caracter est voyelle") ; break;
         case 'e' : printf("le caracter est voyelle") ; break;
         case 'i' : printf("le caracter est voyelle") ; break;
         case 'o' : printf("le caracter est voyelle") ; break;
         case 'u' : printf("le caracter est voyelle") ; break;
         case 'y' : printf("le caracter est voyelle") ; break;
         default  : printf("pas voyelle");
         break;


     }
    return 0;
}
