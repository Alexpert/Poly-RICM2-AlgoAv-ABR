
#define MAX_FILE_SIZE       32


typedef struct {
  int tete ;
  int queue ;
  pnoeud_t Tab [MAX_FILE_SIZE] ;
} file_t, *pfile_t ;

pfile_t creer_file () ;

int file_vide (pfile_t f) ;

int file_pleine (pfile_t f) ;

pnoeud_t retirer_file (pfile_t f)  ;

int deposer_file (pfile_t f, pnoeud_t p) ;
