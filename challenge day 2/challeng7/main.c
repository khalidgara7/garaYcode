#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* �crivez un programme pour v�rifier si le caract�re donn� est un alphabet majuscule ou non en utilisant
    l'instruction conditionnelle if-else en C. Les lettres majuscules vont de 'A' � 'Z'. Les valeurs ASCII
    de 'A' et 'Z' sont respectivement 65 et 90. Si la valeur ASCII d'un caract�re est comprise entre 65 et 90, il s'agit d'un alphabet majuscule.*/

    char caractere;

    printf("entrer un caractere : ");
    scanf("%c",&caractere);

     if (caractere >= 65 && caractere <=90)
        printf("le caractere est majuscule");
        else
        printf("le caracter est miniscule");

    return 0;
}
