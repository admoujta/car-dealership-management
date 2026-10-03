#include "ft.h"
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

        printf("Aucun vehicule trouve avec les criteres specifies.\n");


    }
}
