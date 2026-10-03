#include "ft.h"
Voiture *trie_annee(Voiture *head)
{
    Voiture *i,*j;
     Voiture tmp;
    if(head != NULL)
    {
        for(i = head;i ->next != NULL;i = i ->next)
        {
            for(j = i;j != NULL;j = j -> next)
            {
                if(i->annee > j->annee)
                {
                    tmp = *i;
                    *i = *j;
                    *j = tmp;

                    Voiture *tmp_next = i->next;
                    i->next = j->next;
                    j->next = tmp_next;

                }
            }
        }
        printf("TRIE AVEC SUCCEE !!!!!!\n");
        return head;
    }
    printf("La liste est Vide\n");
    return head;
}
