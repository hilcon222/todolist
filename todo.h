/* how are you dumb enough to not understand what this code does?
 * because it is embarassing, just try to look at the file name.
 * what does it suggest you, marshmallow? it is a header file, isn't it?
 * Abandon all hope, ye who enter here. */

#ifndef TODO_H
#define TODO_H

#include <stdio.h>
#include <stdlib.h>
#define TODO 0 // defines TODO as 0
#define DONE 1 // defines DONE as 1

#define MAXSIZ 20

#define ADD 1 // defines ADD as 1
#define DEL 2 // I think you can get the pattern dummy.
#define CPL 3 // was I not clear?

typedef struct {
    char *description; /* description */
    char completed; /* whether this action was completed or not, are you dumb? */
} todo;
#endif