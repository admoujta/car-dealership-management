#ifndef FT_H
# define FT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Voiture {
    char marque[50];
    char modele[50];
    int annee;
    float prix;
    struct Voiture *next;
} Voiture;

Voiture *creation_noeud();
Voiture *Ajout_debut(Voiture *head);
Voiture *ajout_fin(Voiture *head);
Voiture *ajout_apre_voiture(Voiture *head,char model[]);
Voiture *sup_debut(Voiture *head);
Voiture *sup_fin(Voiture *head);
Voiture *sup_voit(Voiture *head,char model[]);
Voiture *modif_marque(Voiture* head,char marque[]);
Voiture *modif_model(Voiture* head,char model[]);
Voiture *modif_anne(Voiture* head,int annee);
Voiture *modif_prix(Voiture* head,float prix);
Voiture *trie_marque(Voiture *head);
Voiture *trie_model(Voiture *head);
Voiture *trie_annee(Voiture *head);
Voiture *trie_prix(Voiture *head);
Voiture *menu_statistique(Voiture *head);
Voiture *menu_trie(Voiture *head);
Voiture *menu_modifier(Voiture *head);
Voiture *menu_recherche(Voiture *head);
Voiture *menu_sup(Voiture *head);
Voiture *menu_ajout(Voiture *head);

int Total_voit(Voiture *head);
float   Valeur_tota_voit(Voiture *head);

void    to_lower(char *str);
void    affiche(Voiture *head);
void    Recherche_marque(Voiture *head,char marque[]);
void    Recherche_model(Voiture *head,char model[]);
void    Recherche_annee(Voiture *head,int annee);
void    Recherche_prix(Voiture *head,float prix);
void    Recherche_avance(Voiture *head, char marque[], char model[], int annee, float prix);
void    sauv_fichier(char *fichier,Voiture *head);
void    charger_fichier(char *fichier);
void    menu_Fichier(Voiture **head);
void    Gestion();
void    menu_principale();

#endif