#include "ft.h"

Voiture *sup_fin(Voiture *head)
{
    Voiture *tmp = head;
    if(head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    while(tmp ->next->next != NULL)
    {
        tmp = tmp ->next;
    }
    free(tmp ->next);
    tmp ->next = NULL;

    printf("SUPRESSION AVEC SUCCEE !!!!!!\n");
    return head;
}
