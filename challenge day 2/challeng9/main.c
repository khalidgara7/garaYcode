#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* Ecrire un programme C qui lit un caractère et détermine s'il fait partie des alphabets ou non. Et s'il l'est,
     dire en plus s’il est une minuscule ou une majuscule.*/

    printf("entrer un caractere : ");
    scanf("%c",&caractere);

     if (caractere >= 65 && caractere <=90)
        printf("le caractere est majuscule");
        else if (caractere >=92 && caractere<=127)
            printf("le caractere est miniscule");
            else
                printf(" n'et pas un alphabet");
    return 0;
}
