#include "ft.h"
Voiture *ajout_apre_voiture(Voiture *head,char model[])
{
    Voiture *nv;
    Voiture *tmp = head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->modele,model) == 0)
        {
            nv = creation_noeud();
            if (nv == NULL)
                return head;
            nv ->next = tmp->next;
            tmp ->next = nv;

            printf("AJOUT AVEC SUCCEE !!!!!!\n");
            return head;
        }
        tmp = tmp->next;
    }
    printf("Voiture avec le modele %s non trouvee.\n", model);
    return head;
}
