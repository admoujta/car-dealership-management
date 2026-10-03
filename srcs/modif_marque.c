#include "ft.h"

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
            saisir_texte(tmp->marque);
            printf("saisr le nouveau model: ");
            saisir_texte(tmp->modele);
            printf("saisr la nouvelle annee: ");
            do { saisir_entier(&tmp->annee); } while (tmp->annee <= 0);
            printf("saisr la nouvelle prix: ");
            do { saisir_prix(&tmp->prix); } while (tmp->prix < 0);
            trouve = 1;

             printf("Modification avec Succes!!!!\n");

            break;
        }
        tmp=tmp ->next;
    }
    if(trouve == 0)
    {
        printf("La marque est Introuvable\n");

        return head;
    }

    return head;
}
