
/* structure noeud presentee en cours */

typedef struct n {
  int cle;
  struct n *fgauche, *fdroite;
} noeud_t, *pnoeud_t ;

/* type Arbre, pointeur vers un noeud */

typedef pnoeud_t Arbre_t;

