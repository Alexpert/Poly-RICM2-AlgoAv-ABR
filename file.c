#include <stdlib.h>

#include "abr.h"
#include "file.h"

pfile_t creer_file ()
{
  pfile_t pfile = malloc(sizeof(file_t));
	pfile->tete = 0;
	pfile->queue = 0;
  return pfile;
}

int file_vide (pfile_t f)
{
  return f->tete == f->queue;
}

int file_pleine (pfile_t f)
{
  return f->queue == (f->tete -1 ) % MAX_FILE_SIZE;
}

pnoeud_t retirer_file (pfile_t f)
{
	return !file_vide(f) ? f->Tab[f->tete++ % MAX_FILE_SIZE] : NULL;
}

int deposer_file (pfile_t f, pnoeud_t p)
{
  if (!file_pleine(f)) {
		f->Tab[f->queue++ % MAX_FILE_SIZE] = p;
		return 0;
	} else {
		return 1;
	}
}
