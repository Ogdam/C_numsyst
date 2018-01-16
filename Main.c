#include <stdio.h>
#include <stdlib.h>
#define NB_SYSTNUM 5

#include "ConvertionGrecque.h"
#include "Main.h"

int main (void){
    ChoixConvertion();
}

void ChoixConvertion(void){
    system("clear");
    int type_traitement = -1;
    int syst_num = -1;
    char erreur = ' ';
    char *syst_nom[NB_SYSTNUM][9];
    *syst_nom[0]="Grecque";
    *syst_nom[1]="Egyptien";
    *syst_nom[2]="Chinois";
    *syst_nom[3]="Japonais";
    *syst_nom[4]="Romain";
    
    printf("Bienvenue sur le programme de conversion du système de numération indo-arabe a un autre.\n");    
    
    do{
        printf("Vers quel système souhaitez vous effectuer une conversion?\n");
        printf("Appuyez sur :\n");
        printf("0 - Grecque\n"
               "1 - Egyptien(Babylonien)\n"
               "2 - Chinois\n"
               "3 - Japonais\n"
               "4 - Romain\n");
        scanf("%d",&syst_num);
        scanf("%c",&erreur);
        system("clear");
        if(syst_num!=0 && syst_num!=1 && syst_num!=2 && syst_num!=3 && syst_num!=4){
            printf("Le systeme de numération choisit n'existe pas.\n");
        }
    }while(syst_num!=0 && syst_num!=1 && syst_num!=2 && syst_num!=3 && syst_num!=4);

    do{
        printf("Vous avez choisi '%s' Désirez-vous appliquer le programme à un fichier" 
               "texte ou bien sur un seul chiffre en ligne de commande?\n"
               "2- Appliquer à un fichier\n"
               "1 - Appliquer en ligne de commande\n",syst_nom[syst_num][0]);
        scanf("%d",&type_traitement);
        scanf("%c",&erreur);
        if(type_traitement != 1 && type_traitement != 0){
            printf("Vous avez donné un nombre qui ne correspond à aucun type de traitement, veuillez réessayer.\n");
        }
        system("clear");
    }while((type_traitement != 1) && (type_traitement != 0));
    
    if(type_traitement == 0){
        ParFichier();
    }else Manuellement(syst_num);
}

void Manuellement(){
    int nb_donne=0;
    printf("Vous avez choisi d'appliquer le programme en ligne de commande, écrivez votre nombre :\n");
    scanf("%d",&nb_donne);
}

void ParFichier(void){  
    /*printf("Vous avez choisi d'appliquer le programme à un fichier texte,"
            "veuillez ecrire le chemin relatif de l'emplacement du fichier.\n");// Chemin relatif portable
    scanf("%s",&emplacement_fic);
    f = fopen(emplacement_fic,"r");
    if(f != NULL){
        do{
            car_actuel = fgetc(f);
            printf("%c", car_actuel);
        } while (car_actuel != EOF);
        fclose(f);
    }
    else{
        printf("Erreur3 - Le fichier n'existe pas.\n");
        return 3;
    }*/
}

void Convertion(int syst_num){
    switch(syst_num){
        case 0 :
            ConvertionGrecque(nb_donne);
            break;
        case 1 :
            //cv_egypt(nb_donne);
            break;
        case 2:
            //cv_chin(nb_donne);
            break;
        case 3 :
            //cv_jap(nb_donne);
            break;
        case 4 :
            //cv_rom(nb_donne);
            break;
    }
}

int Operation(char traitement,int nb1,int nb2){
    switch traitement {
        case 0 : 
            return nb1 * nb2;
            break;
        case 1 :
            return nb1 / nb2;
            break;
        case 2 :
            return nb1 - nb2;
            break;
        case 3 :
            return nb1 + nb2;
            break;
    }
}