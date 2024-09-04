#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char Titre[50][20];
    char Auteur[50][20];
    float Prix[50];
    int Quantite[50];
    char Recherche[20];
    int numLive=0 ;
    int i ,j;
    int Tc=0 ;
    int S=0;

    int choix ;


    do{
    printf("\t\t***************************************************\n");
    printf("Veuillez choisire un num : \n");
    printf("1.Ajouter un livre au stock \n");
    printf("2.Afficher tous les livres disponibles \n");
    printf("3.Rechercher un livre par son titre \n");
    printf("4.Supprimer un livre du stock \n");
    printf("5.Mettre à jour la quantite d'un livre \n");
    printf("6.Afficher le nombre total de livres en stock \n");
    printf("0.Quitter \n\n");

    printf("Mon choix est : ");
    scanf("%d \n",&choix);
    if(choix==1){
        printf("Titre du livre : ");
        scanf("%s[^\n]", Titre[numLive]);

        printf("Auteur du livre : ");
        scanf("%s[^\n]", Auteur[numLive]);

        printf("Prix de livre : ");
        scanf("%f",&Prix[numLive]);

        printf("Quantie de livre : ");
        scanf("%d",&Quantite[numLive]);

        numLive++;

    }else if(choix==2){
        for(i=0;i<numLive;i++){
            printf("Titre : %s \n ",Titre[i]);
            printf("Auteur : %s \n",Auteur[i]);
            printf("Prix : %.2f \n",Prix[i]);
            printf("Quantite : %d \n",Quantite[i]);
        }
    }else if(choix==3){
        printf("Veuillez entrer la titre de livre :");
        scanf("%s[^\n]",Recherche);
        for(i=0;i<numLive;i++){
            if(strcmp(Titre[i], Recherche) == 0){
            printf("Titre : %s \n ",Titre[i]);
            printf("Auteur : %s \n",Auteur[i]);
            printf("Prix : %.2f \n",Prix[i]);
            printf("Quantite : %d \n\n",Quantite[i]);

            Tc=1;
            break;
            }
            }if(Tc==0){
                printf("Le livre non trouve \n\n");
            }
    }else if(choix==4){
         printf("Veuillez entrer la titre de livre :");
        scanf("%s[^\n]",Recherche);
        for(i=0;i<numLive;i++){
            if(strcmp(Titre[i], Recherche) == 0){
            printf("Entrer la quantite ");
            scanf("%d",&Quantite[i]);


            Tc=1;
            break;
            }if(Tc==0){
                printf("Le livre non trouve \n\n");
            }

    }}else if(choix==5){
        printf("Veuillez entrer le titre de livre");
        scanf("%s[^\n]",Recherche);
        for(i=0;i<numLive;i++){
            if(strcmp(Titre[i],Recherche)==0){
                for(j=i;j<numLive;j++){
                    strcpy(Titre[j],Titre[j+1]);
                    strcpy(Auteur[j],Titre[j+1]);
                    Prix[j]=Prix[j+1];
                    Quantite[j]=Quantite[j+1];
                    Tc=1;
                }
                numLive -- ;
                printf("Livre supprime.\n");
                break;
            }
            if(Tc=0){
                printf("Livre non disponible");
            }
        }

    }else if(choix==6){
        for(i=0;i<numLive;i++){
            S=S+Quantite[i];
        }
        printf("Le total est : %d \n",S);

    }
    }while(choix!=0);

    return 0;
}
