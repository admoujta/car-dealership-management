#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct Voiture {
    char marque[50];
    char modele[50];
    int annee;
    float prix;
    struct Voiture *next;
} Voiture;
Voiture *creation_noeud()
{
    Voiture *nv = (Voiture*)malloc(sizeof( Voiture));
    if(nv != NULL)
    {
        printf("saisir la Marque: ");
        scanf("%s", nv->marque);
        printf("saisir le Modele: ");
        scanf("%s", nv->modele);
        do{
        printf("saisir annee: ");
        scanf("%d",&nv->annee);
        }while(nv->annee <=0);
        do{
        printf("saisir le Prix:");
        scanf("%f",&nv->prix);
        }while(nv->prix <0);

        nv -> next = NULL;
    }
    return nv;
}
void to_lower(char *str)
{
    while(*str)
    {
    *str = tolower(*str);
    str++;
    }
}
Voiture *Ajout_debut(Voiture *head)
{
    Voiture *nv = creation_noeud();
    if(head == NULL)
    {
        head = nv;
        return head;
    }
    nv  ->next= head;
    head = nv;
        return head;
}
Voiture *ajout_fin(Voiture *head)
{
    Voiture *tmp = head;
    Voiture *nv = creation_noeud();
    if(head == NULL)
    {
        return nv;
    }
    while(tmp -> next != NULL)
    {
        tmp = tmp->next;
    }
    tmp ->next = nv;
    system("cls");
    printf("AJOUT AVEC SUCCEE !!!!!!\n");

    return head;
}
Voiture *ajout_apre_voiture(Voiture *head,char model[])
{
    Voiture *nv;
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->modele,model) == 0)
        {
            nv = creation_noeud();
            nv ->next = tmp->next;
            tmp ->next = nv;
            system("cls");
            printf("AJOUT AVEC SUCCEE !!!!!!\n");
            return head;
        }
        tmp = tmp->next;
    }
    printf("Voiture avec le modele %s non trouvee.\n", model);
    return head;
}
void affiche(Voiture *head)
{
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        printf("La marque: %s\n", tmp->marque);
        printf("Le model: %s\n", tmp->modele);
        printf("Annee: %d\n",tmp->annee);
        printf("Prix: %.2f\n",tmp->prix);
        printf("\n----------------------------------\n\n");
        tmp = tmp->next;
    }
}
Voiture *sup_debut(Voiture *head)
{
    Voiture *tmp = head;
    if(head == NULL)
    {
        return NULL;
    }
    head = head ->next;
    free(tmp);
    system("cls");
    printf("SUPRESSION AVEC SUCCEE !!!!!!\n");
    return head;
}
Voiture *sup_fin(Voiture *head)
{
    Voiture *tmp = head;
    if(head == NULL)
    {
        return NULL;
    }
    while(tmp ->next->next != NULL)
    {
        tmp = tmp ->next;
    }
    free(tmp ->next);
    tmp ->next = NULL;
    system("cls");
    printf("SUPRESSION AVEC SUCCEE !!!!!!\n");
    return head;
}
Voiture *sup_voit(Voiture *head,char model[])
{
    Voiture *tmp = head;
    Voiture *courant = NULL;
    if(tmp != NULL && strcmp(tmp ->modele,model) == 0)
    {
        head = tmp ->next;
        free(tmp);
        return head;
    }
    while(tmp != NULL && strcmp(tmp ->modele,model) != 0)
    {
        courant = tmp;
        tmp = tmp ->next;
    }
    if(tmp == NULL)
    {

        system("cls");
        printf("Model Non Trouver\n");
        return head;
    }
    courant ->next = tmp->next;
    free(tmp);
    system("cls");
    system("pause");system("pause");
    printf("SUPRESSION AVEC SUCCEE !!!!!!\n");
    return head;
}
void Recherche_marque(Voiture *head,char marque[])
{
    int trouve = 0;
    Voiture *tmp = head;
    to_lower(marque);
    while(tmp != NULL)
    {
        char tmp_add[50];
        strcpy(tmp_add,tmp->marque);
        to_lower(tmp_add);
        if(strcmp(tmp_add,marque) == 0)
        {
        printf("La marque: %s\n", tmp->marque);
        printf("Le model: %s\n", tmp->modele);
        printf("Annee: %d\n",tmp->annee);
        printf("Prix: %.2f\n",tmp->prix);
        trouve = 1;
        }
        tmp = tmp->next;
    }
    if(trouve == 0)
    {
        printf("La marque est Introuvable!!!\n");
        system("pause");
        system("cls");
        return;
    }
}
void Recherche_model(Voiture *head,char model[])
{
    int trouve = 0;
    Voiture *tmp = head;
    to_lower(model);
    while(tmp != NULL)
    {
        char tmp_add[50];
        strcpy(tmp_add,tmp->modele);
        to_lower(tmp_add);
        if(strcmp(tmp_add,model) == 0)
        {
        printf("La marque: %s\n", tmp->marque);
        printf("Le model: %s\n", tmp->modele);
        printf("Annee: %d\n",tmp->annee);
        printf("Prix: %.2f\n",tmp->prix);
        trouve = 1;
        }
        tmp = tmp->next;
    }
    if(trouve == 0)
    {
        printf("Le Model est Introuvable!!!\n");
        system("pause");
        system("cls");
        return;
    }
}
void Recherche_annee(Voiture *head,int annee)
{
    int trouve = 0;
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        if(tmp ->annee == annee)
        {
        printf("La marque: %s\n", tmp->marque);
        printf("Le model: %s\n", tmp->modele);
        printf("Annee: %d\n",tmp->annee);
        printf("Prix: %.2f\n",tmp->prix);
        trouve = 1;
        }
        tmp = tmp->next;
    }
    if(trouve == 0)
    {
        printf("L Annee est Introuvable!!!\n");
        system("pause");
        system("cls");
        return;
    }
}
void Recherche_prix(Voiture *head,float prix)
{
    int trouve = 0;
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        if(tmp->prix == prix)
        {
        printf("La marque: %s\n", tmp->marque);
        printf("Le model: %s\n", tmp->modele);
        printf("Annee: %d\n",tmp->annee);
        printf("Prix: %.2f\n",tmp->prix);
        trouve = 1;
        }
        tmp = tmp->next;
    }
    if(trouve == 0)
    {
        printf("Le Prix est Introuvable!!!\n");
        system("pause");
        system("cls");
        return;
    }
}
void Recherche_avance(Voiture *head, char marque[], char model[], int annee, float prix)
{
    int trouve = 0;
    Voiture *tmp = head;
    to_lower(marque);
    to_lower(model);
    while (tmp != NULL)
    {
        char tmp_add1[50];
        char tmp_add2[50];
        strcpy(tmp_add1,tmp->marque);
        to_lower(tmp_add1);
        strcpy(tmp_add2,tmp->modele);
        to_lower(tmp_add2);
        int match = 1;
        if (strcmp(marque, "-") != 0 && strcmp(tmp_add1, marque) != 0)
            match = 0;
        if (strcmp(model, "-") != 0 && strcmp(tmp_add2, model) != 0)
            match = 0;
        if (annee != -1 && tmp->annee != annee)
            match = 0;
        if (prix != -1 && tmp->prix != prix)
            match = 0;

        if (match == 1)
        {
            printf("La marque: %s\n", tmp->marque);
            printf("Le model: %s\n", tmp->modele);
            printf("Annee: %d\n", tmp->annee);
            printf("Prix: %.2f\n\n", tmp->prix);
            trouve = 1;
        }

        tmp = tmp->next;
    }

    if (trouve == 0)
    {
        system("cls");
        printf("Aucun vehicule trouve avec les criteres specifies.\n");
        system("pause");
        system("cls");
    }
}
Voiture *modif_marque(Voiture* head,char marque[])
{
    int trouve = 0;
    Voiture *tmp = head;
    to_lower(marque);
    while(tmp != NULL)
    {
        char tmp_add[50];
        strcpy(tmp_add,tmp->marque);
        to_lower(tmp_add);
        if(strcmp(tmp_add,marque) == 0)
        {
            printf("saisr la nouvelle marque: ");
            scanf("%s", tmp->marque);
            printf("saisr le nouveau model: ");
            scanf("%s", tmp->modele);
            printf("saisr la nouvelle annee: ");
            scanf("%d",&tmp->annee);
            printf("saisr la nouvelle prix: ");
            scanf("%f",&tmp->prix);
            trouve = 1;
            system("cls");
             printf("Modification avec Succes!!!!\n");
             system("pause");
            break;
        }
        tmp=tmp ->next;
    }
    if(trouve == 0)
    {
        printf("La marque est Introuvable\n");
        system("pause");
        return head;
    }

    return head;
}
Voiture *modif_model(Voiture* head,char model[])
{
    int trouve = 0;
    Voiture *tmp = head;
    to_lower(model);
    while(tmp != NULL)
    {
        char tmp_add[50];
        strcpy(tmp_add,tmp->modele);
        to_lower(tmp_add);
        if(strcmp(tmp_add,model) == 0)
        {
            printf("saisr la nouvelle marque: ");
            scanf("%s", tmp->marque);
            printf("saisr le nouveau model: ");
            scanf("%s", tmp->modele);
            printf("saisr la nouvelle annee: ");
            scanf("%d",&tmp->annee);
            printf("saisr la nouvelle prix: ");
            scanf("%f",&tmp->prix);
             trouve = 1;
            system("cls");
             printf("Modification avec Succes!!!!\n");
             system("pause");
            break;
        }
        tmp=tmp ->next;
    }
    if(trouve == 0)
    {
        printf("Le Model est Introuvable\n");
        system("pause");
        return head;
    }
    return head;
}
Voiture *modif_anne(Voiture* head,int annee)
{
    int trouve = 0;
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        if(tmp ->annee == annee)
        {
            printf("saisr la nouvelle marque: ");
            scanf("%s", tmp->marque);
            printf("saisr le nouveau model: ");
            scanf("%s", tmp->modele);
            printf("saisr la nouvelle annee: ");
            scanf("%d",&tmp->annee);
            printf("saisr la nouvelle prix: ");
            scanf("%f",&tmp->prix);
             trouve = 1;
            system("cls");
             printf("Modification avec Succes!!!!\n");
             system("pause");
            break;
        }
        tmp=tmp ->next;
    }
   if(trouve == 0)
    {
        printf("L Annee est Introuvable\n");
        system("pause");
        return head;
    }
    return head;
}
Voiture *modif_prix(Voiture* head,float prix)
{
    int trouve = 0;
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        if(tmp ->prix == prix)
        {
            printf("saisr la nouvelle marque: ");
            scanf("%s", tmp->marque);
            printf("saisr le nouveau model: ");
            scanf("%s", tmp->modele);
            printf("saisr la nouvelle annee: ");
            scanf("%d",&tmp->annee);
            printf("saisr la nouvelle prix: ");
            scanf("%f",&tmp->prix);
             trouve = 1;
            system("cls");
             printf("Modification avec Succes!!!!\n");
             system("pause");
            break;
        }
        tmp=tmp ->next;
    }
    if(trouve == 0)
    {
        printf("Le prix est Introuvable\n");
        system("pause");
        return head;
    }
    return head;
}
Voiture *trie_marque(Voiture *head)
{
     Voiture *i,*j;
     Voiture tmp;
    if(head != NULL)
    {
        for(i = head;i ->next != NULL;i = i ->next)
        {
            for(j = i;j != NULL;j = j -> next)
            {
                if(strcmp(i->marque,j->marque) > 0)
                {
                    tmp = *i;
                    *i = *j;
                    *j = tmp;

                    Voiture *tmp_next = i->next;
                    i->next = j->next;
                    j->next = tmp_next;

                }
            }
        }
        printf("TRIE AVEC SUCCEE !!!!!!\n");
    return(head);
    }
    printf("La liste est Vide\n");
    return head;

}
Voiture *trie_model(Voiture *head)
{
Voiture *i,*j;
     Voiture tmp;
    if(head != NULL)
    {
        for(i = head;i ->next != NULL;i = i ->next)
        {
            for(j = i;j != NULL;j = j -> next)
            {
                if(strcmp(i->modele,j->modele) > 0)
                {
                    tmp = *i;
                    *i = *j;
                    *j = tmp;

                    Voiture *tmp_next = i->next;
                    i->next = j->next;
                    j->next = tmp_next;

                }
            }
        }
        printf("TRIE AVEC SUCCEE !!!!!!\n");
    return head;
    }
    printf("La liste est Vide\n");
    return head;

}
Voiture *trie_annee(Voiture *head)
{
    Voiture *i,*j;
     Voiture tmp;
    if(head != NULL)
    {
        for(i = head;i ->next != NULL;i = i ->next)
        {
            for(j = i;j != NULL;j = j -> next)
            {
                if(i->annee > j->annee)
                {
                    tmp = *i;
                    *i = *j;
                    *j = tmp;

                    Voiture *tmp_next = i->next;
                    i->next = j->next;
                    j->next = tmp_next;

                }
            }
        }
        printf("TRIE AVEC SUCCEE !!!!!!\n");
        return head;
    }
    printf("La liste est Vide\n");
    return head;
}
Voiture *trie_prix(Voiture *head)
{

    Voiture *i,*j;
     Voiture tmp;
    if(head != NULL)
    {
        for(i = head;i ->next != NULL;i = i ->next)
        {
            for(j = i;j != NULL;j = j -> next)
            {
                if(i->prix > j->prix)
                {
                    tmp = *i;
                    *i = *j;
                    *j = tmp;

                    Voiture *tmp_next = i->next;
                    i->next = j->next;
                    j->next = tmp_next;

                }
            }
        }
        printf("TRIE AVEC SUCCEE !!!!!!\n");
    return head;
    }
    printf("La liste est Vide\n");
    return head;
}
int Total_voit(Voiture *head)
{
    int cpt = 0;
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        cpt++;
        tmp = tmp->next;
    }
    return cpt;
}
float Valeur_tota_voit(Voiture *head)
{
    float somm = 0;
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        somm = somm + tmp->prix;
        tmp = tmp ->next;
    }
    return somm;
}
void sauv_fichier(char *fichier,Voiture *head)
{
    Voiture *tmp = head;
     FILE* file = fopen(fichier,"w");
     if (file == NULL)
        {
        printf("Impossible d'ouvrir le fichier pour l ecriture.\n");
        return;
    }
    while (tmp != NULL)
    {
        fprintf(file,"La marque: %s\n", tmp->marque);
        fprintf(file,"Le model: %s\n", tmp->modele);
        fprintf(file,"Annee: %d\n",tmp->annee);
        fprintf(file,"Prix: %.2f\n",tmp->prix);
        fprintf(file,"\n----------------------------------\n\n");
        tmp= tmp->next;
    }
    fclose(file);
    printf("Donnees sauvegardees avec succes dans %s.\n", fichier);
}
void charger_fichier(char *fichier)
{
    FILE* file = fopen(fichier,"r");
    if(file == NULL)
    {
        printf("Impossible d'ouvrir le fichier pour charger.\n");
        return;
    }
    char ligne[256];
    while(fgets(ligne,sizeof(ligne),file) != NULL)
    {
        printf("%s ",ligne);
    }
    fclose(file);
}
void menu_Fichier(Voiture **head)
{
    int choix;
    do
    {
        printf("\t\t1. la sauvegarde  des donnes .\n");
        printf("\t\t2. le chargement des donnes.\n");
        printf("\t\t3. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        scanf("%d", &choix);
        switch(choix)
        {
        case 1:

                system("cls");
                sauv_fichier("voiture.txt",*head);
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                charger_fichier("voiture.txt");
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                break;
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 3);
}
Voiture* menu_statistique(Voiture *head)
{
     int choix;
    do
    {
        printf("\t\t1. Total Voiture.\n");
        printf("\t\t2. Valeur total.\n");
        printf("\t\t3. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        scanf("%d", &choix);
        switch(choix)
        {
        case 1:
                system("cls");
                printf("Nombre de voiture disponible: %d\n",Total_voit(head));
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                printf("La valeur Total : %.2f$\n",Valeur_tota_voit(head));
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                break;
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 3);
    return head;
}
Voiture* menu_trie(Voiture *head)
{
     int choix;
    do
    {
        printf("\t\t1. Par marque.\n");
        printf("\t\t2. Par modele.\n");
        printf("\t\t3. Par annee.\n");
        printf("\t\t4. Par prix.\n");
        printf("\t\t5. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        scanf("%d", &choix);
        switch(choix)
        {
            case 1:
                system("cls");
                head = trie_marque(head);
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                head = trie_model(head);
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                head = trie_annee(head);
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                head = trie_prix(head);
                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");
                break;
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 5);
    return head;
}
Voiture* menu_modifier(Voiture *head)
{
    char marque[50];
    char model[50];
    int annee = 0;
    float prix = 0;
     int choix;
    do
    {
        printf("\t\t1. Par marque.\n");
        printf("\t\t2. Par modele.\n");
        printf("\t\t3. Par annee.\n");
        printf("\t\t4. Par prix.\n");
        printf("\t\t5. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        scanf("%d", &choix);
        switch(choix)
        {
            case 1:
                system("cls");
                printf("Saisir la marque rechercher: ");
                scanf("%s", marque);
                head = modif_marque(head,marque);
                system("cls");
                break;
            case 2:
                system("cls");
                printf("Saisir le model rechercher: ");
                scanf("%s", model);
                head = modif_model(head,model);
                system("cls");
                break;
            case 3:
                 system("cls");
                 printf("Saisir l annee rechercher: ");
                scanf("%d",&annee);
                head = modif_anne(head,annee);
                system("cls");
                break;
            case 4:
                system("cls");
                printf("Saisir la marque rechercher: ");
                scanf("%f",&prix);
                head = modif_prix(head,prix);
                system("cls");
                break;
            case 5:
                system("cls");
                break;
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 5);
    return head;
}
Voiture *menu_recherche(Voiture *head)
{
    char marque[50];
    char model[50];
    int annee = 0;
    float prix = 0;
     int choix;
    do
    {
        printf("\t\t1. Par marque.\n");
        printf("\t\t2. Par modele.\n");
        printf("\t\t3. Par annee.\n");
        printf("\t\t4. Par prix.\n");
        printf("\t\t5. Recherche avancee .\n");
        printf("\t\t6. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        scanf("%d", &choix);
        switch(choix)
        {
            case 1:
                system("cls");system("cls");
                printf("Saisi la marque A recherche: ");
                scanf("%s", marque);
                system("cls");
                Recherche_marque(head,marque);
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");system("cls");
                printf("Saisi la marque A recherche: ");
                scanf("%s", model);
                system("cls");
                Recherche_model(head,model);
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");system("cls");
                printf("Saisir le prix A recherche: ");
                scanf("%d",&annee);
                system("cls");
                Recherche_annee(head,annee);
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");system("cls");
                printf("Saisir le prix A recherche: ");
                scanf("%f",&prix);
                system("cls");
                Recherche_prix(head,prix);
                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");system("cls");
                printf("Saisi la marque A recherche (ou '-' pour ignorer): ");
                scanf("%s", marque);
                printf("Saisi la marque A recherche(ou '-' pour ignorer): ");
                scanf("%s", model);
                printf("Saisir l annee A recherche(ou -1 pour ignorer): ");
                scanf("%d",&annee);
                printf("Saisir le prix A recherche(ou -1 pour ignorer): ");
                scanf("%f",&prix);
                system("cls");
                Recherche_avance(head,marque,model,annee,prix);
                system("pause");
                system("cls");
                break;
            case 6:
                system("cls");
                break;
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 6);
    return head;
}
Voiture *menu_sup(Voiture *head)
{
    char model[50];
    int choix;
    do
    {
        printf("\t\t1.Suppression au debut.\n");
        printf("\t\t2. Suppression a  la fin.\n");
        printf("\t\t3. Suppression apres une voiture specifique.\n");
        printf("\t\t4. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        scanf("%d", &choix);
        switch(choix)
        {
            case 1:
                system("cls");
            head = sup_debut(head);
            system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                head = sup_fin(head);
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                printf("Saisir le model Pour Suprimer: ");
                scanf("%s", model);
                head = sup_voit(head,model);
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                break;
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 4);
    return head;
}
Voiture* menu_ajout(Voiture *head)
{
    char model[50];
    int choix;
    do
    {
        printf("\t\t1. Ajout au debut.\n");
        printf("\t\t2. Ajout a la fin.\n");
        printf("\t\t3. Ajout apres une voiture specifique dans le stock.\n");
        printf("\t\t4. Retour.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        scanf("%d", &choix);
        switch(choix)
        {
            case 1:
                system("cls");
                head = Ajout_debut(head);
                system("cls");
                printf("AJOUT AVEC SUCCEE!!\n");
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                head = ajout_fin(head);
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                printf("Saisr le model a chercher: ");
                scanf("%s", model);
                head = ajout_apre_voiture(head,model);
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                break;
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 4);
    return head;
}

void Gestion()
{
    Voiture *head = NULL;
    int choix;
    do
    {
        printf("\t\t\tGestion d un Concessionnaire de Voitures:\n\n");
        printf("\t\t1-->Ajout d une voiture au stock.\n");
        printf("\t\t2-->Modification d une voiture au stock.\n");
        printf("\t\t3-->Suppression d une voiture au stock.\n");
        printf("\t\t4-->Recherche d une voiture au stock.\n");
        printf("\t\t5-->Affichage des voitures disponibles dans le stock.\n");
        printf("\t\t6-->Fonctionnalite Sur Fichier\n");
        printf("\t\t7-->Trie.\n");
        printf("\t\t8-->Statistiques sur le stock.\n");
        printf("\t\t9-->MENU principal.\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        scanf("%d", &choix);
        switch(choix)
        {
            case 1:
                system("cls");
                head = menu_ajout(head);
                system("cls");
                break;
            case 2:
                system("cls");
                head = menu_modifier(head);
                break;
            case 3:
                system("cls");
                head = menu_sup(head);
                system("cls");
                break;
            case 4:
                system("cls");
                head = menu_recherche(head);
                break;
            case 5:
                system("cls");
                affiche(head);
                system("pause");
                system("cls");
                break;
            case 6:
                system("cls");
                menu_Fichier(&head);
                break;
            case 7:
                system("cls");
                head = menu_trie(head);
            break;
            case 8:
            system("cls");
                head = menu_statistique(head);
            break;
            case 9:
                system("cls");
            return;
            default:
                system("cls");
                printf("Choix Incorrect\n");
        }
    } while(choix != 9);
}

void menu_principale()
{
    int choix;
    do
    {
        printf("\t\t\tMenu Principal:\n\n");
        printf("\t\t1-->Gestion d'un Concessionnaire de Voitures.\n");
        printf("\t\t2-->Quitter\n");
        printf("\n\t\t\t\t\t\tChoix: ");
        scanf("%d",&choix);
        switch(choix)
        {
            case 1:
                  system("cls");
                Gestion();
                break;
            case 2:
                 system("cls");
                printf("A Bientot\n");
                exit(0);
            default:
                printf("Choix Incorrect\n");
                break;
        }
    } while(choix != 2);
}
int main()
{
    menu_principale();
    return 0;
}
