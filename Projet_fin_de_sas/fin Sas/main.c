#include <stdio.h>
#include <stdlib.h>

// --------------- stractures--------------

            typedef struct {
                int day;
                int heures;
                int minutes;
            }Deadline;

            typedef struct  {
                int id_unique;
                char titre[20];
                char description[50];
                int statut;
                Deadline deadline;

            }Tache;


void func_menu();

void Ajouter_tache();
void Ajouter_pleusier_tache();


int index = 0;
Tache taches[100];

int main()
{
    func_menu();
    return 0;
}



//  ----------- functions-------------

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

        }

      }while(number != 0);

    }

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

        printf("donner le titre de tache :");
        scanf("%s", taches[index].titre);

        printf("donner la descreption de tache :");
        fgets(taches[index].description, 50, stdin); // fgets lire l'espaces
        gets(taches[index].description);

        do{
            printf("choisir le status de la tache ");
            printf("\n 1-a realiser \n 2-en cours de realisation\n 3-finalisee \n :");
            scanf("%d", &taches[index].statut);

        } while (taches[index].statut > 3 || taches[index].statut < 1);




        printf("\nla tache est bien Ajouter\n");
        sleep(2);
        index++;
    }

  void Ajouter_pleusier_tache(){
            int PA;
            printf("donner le nombre des taches que vous voullez ajouter :");
            scanf("%d", &PA);
            while(PA--)
                Ajouter_tache();

        }

void afficher (){
    int choix;
    printf("--------------- la liste des taches-----------------");

    if(index == 0) {
        printf("\nla list et vide!!!\n");
        sleep(4);
    } else {

        for(int i = 0; i < index; i++)
        {
            printf("%d , %s, %s ,%s\n",taches[i].id_unique,taches[i].titre,taches[i].description,
                   taches[i].statut == 1 ?   "a realiser"
                          : taches[i].statut == 2 ? "en cours de realisation"
                                              : "finalisee");
        }
        printf("0- return au menu \n:");
        scanf("%d", &choix);
    }
}
// function isExist() pour verifier que le code dans le tablou ou bien no .
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



