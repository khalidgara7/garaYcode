#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Paire ou Impaire
// Ecrivez un programme qui demande un nombre et affiche si ce nombre est paire ou impaire//

    int num;

    printf("entrer un nombre :\n");
    scanf("%d",&num);

    if(num%2 == 0)
        printf("le nombre est paire");
    else
        printf("le nombre est impaire");
    return 0;
}
