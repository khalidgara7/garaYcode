#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Écrivez un programme en C qui va te permettre d'afficher vos informations personnelles : Nom, prénom , Age , Sexe et numéro de téléphone.
    //Les données sont saisies à partir du clavier.

    char nom[20], prenom[20], num_telephone[13];
    int age;
    char sexe[2];

    printf("veuillier saisie votre nom : \n");
    scanf("%s",&nom);
    printf("veuillier saisie votre prenom : \n");
    scanf("%s",&prenom);
    printf("veuillier saisie votre age : \n");
    scanf("%d",&age);
    printf("veuillier saisie votre sexe : \n");
    scanf("%s",&sexe);
    printf("veuillier saisie votre nomero de telephone : \n");
    scanf("%s",&num_telephone);

printf("nom est: %s\n, prenom est: %s\n, age est: %d\n, sexe est :%s\n, telephone est: %s",nom,prenom,age,sexe,num_telephone);


    return 0;
}
