#include <stdio.h>
#include <stdlib.h>

int main()
{
    // �crire un programme C qui lit un entier et l'affiche invers�e. On choisira de ne pas afficher chiffre par chiffre mais de construire
    //  l'entier invers� puis l'afficher. Ex: si l'entr�e est 12345 on doit afficher l'entier 54321.
    int A, B, Q;

    printf("entrer un nmbr");
    scanf("%d",A);

    B = 0;
        while(A > 0)
        {
            Q = A%10;
            B = (10*B)+Q;
            A = A/10;
        }
        printf("l'inverse de nombre est  :%d",B);
    return 0;
}
