#include "ft.h"

Voiture *sup_debut(Voiture *head)
{
    Voiture *tmp = head;
    if(head == NULL)
    {
        return NULL;
    }
    head = head ->next;
    free(tmp);

    printf("SUPRESSION AVEC SUCCEE !!!!!!\n");
    return head;
}
