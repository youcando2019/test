#ifndef __SLLIST_H
#define __SLLIST_H

#include <utils.h>

typedef struct slList slList;

slList* slList_init();
void slList_add(slList* me, void* data, size_t size);

#endif
