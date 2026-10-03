#include "ft.h"
void sauv_fichier(char *fichier,Voiture *head)
{
    Voiture *tmp = head;
     FILE* file = fopen(fichier,"w");
     if (file == NULL)
        {
        printf("Impossible d'ouvrir le fichier pour l ecriture.\n");
        return;
    }
    while (tmp != NULL)
    {
        fprintf(file,"La marque: %s\n", tmp->marque);
        fprintf(file,"Le model: %s\n", tmp->modele);
        fprintf(file,"Annee: %d\n",tmp->annee);
        fprintf(file,"Prix: %.2f\n",tmp->prix);
        fprintf(file,"\n----------------------------------\n\n");
        tmp= tmp->next;
    }
    fclose(file);
    printf("Donnees sauvegardees avec succes dans %s.\n", fichier);
}
