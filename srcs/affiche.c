#include "ft.h"
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
