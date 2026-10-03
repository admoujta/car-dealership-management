#include "ft.h"

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


        printf("Model Non Trouver\n");
        return head;
    }
    courant ->next = tmp->next;
    free(tmp);


    printf("SUPRESSION AVEC SUCCEE !!!!!!\n");
    return head;
}
