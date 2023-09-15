#include <stdio.h>
#include <stdlib.h>

int main()
{
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
