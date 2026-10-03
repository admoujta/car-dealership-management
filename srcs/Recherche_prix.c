#include "ft.h"
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


        return;
    }
}
