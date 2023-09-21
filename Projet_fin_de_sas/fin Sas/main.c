#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --------------- stractures--------------

            typedef struct {
                int annee;
                int mois;
                int jour;
            }Deadline;

            typedef struct  {
                int id_unique;
                char titre[20];
                char description[50];
                char statut[20];
                Deadline deadline;

            }Tache;


void func_menu();
void Ajouter_tache();
void Ajouter_pleusier_tache();
void func_trie_order_by_alphabitique ();

int index = 3; // nombre des taches existté
Tache taches[100];

int main()
{
    initialiserTaches();
    func_menu();
    return 0;
}

//  ----------- functions pour evité l'entrer des données chaque fois-------------
    void initialiserTaches() {

        taches[0].id_unique = 1;
        strcpy(taches[0].titre, "Ajouter taches");
        strcpy(taches[0].description, "description");
        strcpy(taches[0].statut,"realiser");
        taches[0].deadline.annee = 2023;
        taches[0].deadline.mois= 02;
        taches[0].deadline.jour = 23;


        taches[1].id_unique = 2;
        strcpy(taches[1].titre, "supprimer");
       strcpy(taches[1].description, "description tach");
        strcpy(taches[1].statut,"realiser");
        taches[1].deadline.annee = 2023;
        taches[1].deadline.mois= 01;
        taches[1].deadline.jour = 20;



        taches[2].id_unique = 3;
        strcpy(taches[2].titre, "modifier taches");
       strcpy(taches[2].description, "description");
        strcpy(taches[2].statut,"realiser");
        taches[2].deadline.annee = 2023;
        taches[2].deadline.mois= 11;
        taches[2].deadline.jour = 12;



    }
// fonction pour affichage de menu l'acces a l'aplication
    void func_menu(){
        int number ;
    do{
        system("cls");
        printf("1-Ajouter un tache \n2-Ajouter pleusieur taches\n");
        printf("3-Affichier laliste de toutes tache \n4-Modifier un tache\n");
        printf("5-Supprimer une tache \n6-recherche des taches \n7-les statistique");

        printf("\n\n *_veuilliez choisir une operation sur la liste :");
        scanf("%d",&number);

        switch(number){
            case 1 : Ajouter_tache(); break;
            case 2 : Ajouter_pleusier_tache();break;
            case 3 : afficher();break;
            case 6 : recherche ();break;
            case 5 : supression ();break;


        }

      }while(number != 0);

    }
// fonction pour ajouter les taches
    void Ajouter_tache(){

        printf(" ---------------- ajouter une nouvelle tache------------------\n");
        again:
        printf("donner id de tache :");
        scanf("%d",&taches[index].id_unique);
        int test = isExist(taches[index].id_unique);
        if (test != 0){
            printf("deja exist!\n");
            goto again ;
        }
        printf("entrer le deadline (se forme jj mm aaaa):");
        scanf("%d %d %d",&taches[index].deadline.jour,&taches[index].deadline.mois,&taches[index].deadline.annee);

        printf("donner le titre de tache :");
        scanf("%s", taches[index].titre);

        printf("donner la descreption de tache :");
        fgets(taches[index].description, 50, stdin); ////La fonction lit une ligne de texte ou une chaîne à partir du fichier
        gets(taches[index].description);  // ou de la console spécifié. Et puis le stocke dans la variable de chaîne respective.

        int statusNum ;
        do{
            printf("choisir le status de la tache ");
            printf("\n 1-a realiser \n 2-en cours de realisation\n 3-finalisee \n :");

            scanf("%d", &statusNum);

        } while (statusNum > 3 || statusNum < 1);

        switch (statusNum) {
            case 1:  strcpy(taches[index].statut, "a realiser"); break;
            case 2:  strcpy(taches[index].statut, "en cours de realisation"); break;
            case 3:  strcpy(taches[index].statut, "finalisee"); break;

        }
        printf("\nla tache est bien Ajouter\n");
        sleep(2);
        index++;
    }
// fonction pour ajouter pleusieur taches
  void Ajouter_pleusier_tache(){
            int PA;
            printf("donner le nombre des taches que vous voullez ajouter :");
            scanf("%d", &PA);
            while(PA--)
                Ajouter_tache();

        }
// affichage de la liste des taches
void afficher (){

    int choix;
      int a, code[index];

        printf("\n \t choisir comment vous voullez afficher la liste :"
          "\n \t\t\t-1 Trier les taches par ordre alphabétique."
            "\n \t\t\t-2 Trier les taches par deadline."
            "\n \t\t\t-3 Afficher les taches dont le deadline est dans 3 jours ou moins \n :");
        scanf("%d",&a);

         if(a == 1)
               func_trie_order_by_alphabitique();
         else if ( a == 2)
               trie_par_deadline();


    printf("--------------- la liste des taches-----------------\n");

    if(index == 0) {
        printf("\nla liste et vide!!!\n");
        sleep(4);
    } else {

        for(int i = 0; i < index; i++)
        {
            printf("%d , %s, %s ,%s, %02d/%02d/%d \n",taches[i].id_unique,taches[i].titre,taches[i].description,taches[i].statut,
                   taches[i].deadline.jour, taches[i].deadline.mois, taches[i].deadline.annee );
        }
        printf("0- return au menu \n:");
        scanf("%d", &choix);
    }               // trie les taches par trois maniére

}
// fonction pour trie par une deadline
void trie_par_deadline(){

    Tache tach_temporaire;
    for(int i = 0; i < index ; i++){
        for (int j = i + 1; j < index; j++){
         if (date_vers_jour(i) > date_vers_jour(j)){
            tach_temporaire = taches[i];
            taches[i] = taches[j];
            taches[j] = tach_temporaire;
         }
        }
    }

}
// fonction
int date_vers_jour(int i){
       int jour = taches[i].deadline.jour;
       int mois = taches[i].deadline.mois;
       int annee = taches[i].deadline.annee;

       int resultat = jour + (mois * 30) + (annee * 365);
       return resultat;
}

// foncion pour trie la liste d'affichage par alphabitique
void func_trie_order_by_alphabitique (){
        Tache tach_temp;
    for(int i = 0; i < index; i++)
    {
        for (int j = i + 1; j < index; j++)
        {
             if (strcmp(taches[i].titre, taches[j].titre) > 0)
            {
                tach_temp = taches[i];
                taches[i] = taches[j];
                taches[j] = tach_temp;
            }

        }
    }
}
// function isExist() pour verifier que le id_uniqu deja utilisé ou bien no.
int isExist(int id){

   int i ;
    int test = 0 ;
    for (i = 0 ; i < index ; i++)
        {
            if (taches[i].id_unique == id)
                {
                  test++;
                }
        }
        return test ;
}
// fonction de rechercher
void recherche (){

    int num;
    do{
        printf("choisir comment vous voullez rechercher une tache \n recherche par :");
    printf(" \n1-Rechercher une tâche par son Identifiant \n 2-Rechercher une tâche par son Titre");
    scanf("%d",&num);
    }while(num < 0 || num >3);
    switch(num){
    case 1 : printf("");break;
            recherche_par_id();
    case 2 : printf("");break;}
            recherche_par_titre();
}
void recherche_par_id (){
    int num1;
    for(int i = 0; i < index; i++){
        if(taches[i].id_unique == num1)
        {
            printf("id de tache %d est %d:",taches[i].id_unique,taches[i].id_unique);
            printf("le titre de tache %s est:",taches[i].id_unique,taches[i].titre);
            printf("la descreption de tache %s est:",taches[i].id_unique,taches[i].description);
            printf("deadline de tache  %s est",taches[i].id_unique,taches[i].deadline);
            printf("status de tache  %d est",taches[i].id_unique,taches[i].statut);

        }
    }

}
void recherche_par_titre(){
     int num2;
    for(int i = 0; i < index; i++){
        if(taches[i].titre == num2)
        {
            printf("id de tache %d est %d:",taches[i].id_unique,taches[i].id_unique);
            printf("le titre de tache %s est:",taches[i].id_unique,taches[i].titre);
            printf("la descreption de tache %s est:",taches[i].id_unique,taches[i].description);
            printf("deadline de tache  %s est",taches[i].id_unique,taches[i].deadline);
            printf("status de tache  %d est",taches[i].id_unique,taches[i].statut);
}
    }
}
// fonction de suppression
void supression (){

    int a,i;
        printf("Choisissez id_unique de tache que vous souhaitez  supprimer :\n" );

          for (int i = 0; i < index; i++){
            printf("id_unique d'une tache est  %d",i);
            printf("le titre d'une tache est  %s",taches[i].titre);
            printf("description d'une tache est  %s",taches[i].description);
            printf("le status d'une tache est  %d",taches[i].statut);
          }
          printf("entrer id de taches que vous voullez suprimer :");
          scanf("%d",&a);

            for (int j = i; j < index; j++){
            taches[j] = taches[j+1];
          }
          index--;
          printf("la tache a bien suprimer");
}
// fonction de modification
void modification (){}
