#include "ft.h"

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
        printf("Le Model est Introuvable\n");

        return head;
    }
    return head;
}
