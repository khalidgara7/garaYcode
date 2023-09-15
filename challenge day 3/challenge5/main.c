#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Ecrire un algorithme qui demande un nombre à l’utilisateur, puis affiche sa table de multiplication de 1 à 10

    int numb, i;

    printf("entrer un nombre  :");
    scanf("%d",&numb);

    for(i = 0; i <= 10; i++)
        printf("%d * %d = %d\n",numb,i, numb * i);

    return 0;
}
