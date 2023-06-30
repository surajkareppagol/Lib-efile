/**************************************/
/* efile.h */
/**************************************/

#ifndef _EFILE_H_
#define _EFILE_H_

#include <stdio.h>

/**************************************/
/* Close file */
/**************************************/

#define eclose(filePtr) (fclose(filePtr))

/**************************************/
/* Open file */
/**************************************/

FILE *eopen(char *fileName, char *fileMode);

FILE *eopenr(char *fileName);

FILE *eopenw(char *fileName);

FILE *eopena(char *fileName);

/**************************************/
/* Read from file */
/**************************************/

char *eread(FILE *filePtr);

/**************************************/
/* Print to screen */
/**************************************/

void eprint(FILE *filePtr);

#endif

/**************************************/
/* EOF */
/**************************************/
