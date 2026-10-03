#include "ft.h"
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


        return;
    }
}
