#include "ft.h"

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


        return;
    }
}
