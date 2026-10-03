NAME = car-management
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes
RM = rm -rf

SRC = 	srcs/main.c \
		srcs/affiche.c \
		srcs/ajout_apre_voiture.c \
		srcs/Ajout_debut.c \
		srcs/ajout_fin.c \
		srcs/charger_fichier.c \
		srcs/creation_noeud.c \
		srcs/Gestion.c \
		srcs/menu_ajout.c \
		srcs/menu_Fichier.c \
		srcs/menu_modifier.c \
		srcs/menu_principale.c \
		srcs/menu_recherche.c \
		srcs/menu_statistique.c \
		srcs/menu_sup.c \
		srcs/menu_trie.c \
		srcs/modif_anne.c \
		srcs/modif_marque.c \
		srcs/modif_model.c \
		srcs/modif_prix.c \
		srcs/Recherche_annee.c \
		srcs/Recherche_avance.c \
		srcs/Recherche_marque.c \
		srcs/Recherche_model.c \
		srcs/Recherche_prix.c \
		srcs/sauv_fichier.c \
		srcs/sup_debut.c \
		srcs/sup_fin.c \
		srcs/to_lower.c \
		srcs/sup_voit.c \
		srcs/Total_voit.c \
		srcs/trie_annee.c \
		srcs/trie_marque.c \
		srcs/trie_model.c \
		srcs/trie_prix.c \
		srcs/Valeur_tota_voit.c
OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c includes/ft.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
