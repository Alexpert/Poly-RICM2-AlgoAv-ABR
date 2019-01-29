#include <stdlib.h>
#include "abr.h"
#include "pile.h"

ppile_t creer_pile ()
{
	ppile_t p = malloc(sizeof(pile_t));
	p->sommet = 0;
	return p;
}

int pile_vide (ppile_t p)
{
  return p->sommet == 0;
}

int pile_pleine (ppile_t p)
 {
   return p->sommet == MAX_PILE_SIZE;
}

pnoeud_t depiler (ppile_t p)
{
	return p->sommet != 0 ? p->Tab[--p->sommet] : NULL;
}

int empiler (ppile_t p, pnoeud_t pn)
  {
	if (p->sommet < MAX_PILE_SIZE) {
	  p->Tab[p->sommet++] = pn;
	  return 0;
	} else {
		return 1;
	}
}
