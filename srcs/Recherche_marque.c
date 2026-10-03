#include "ft.h"

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


        return;
    }
}
