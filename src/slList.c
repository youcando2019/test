#include <utils.h>

typedef struct slList
{
    void* data;
    slList* next;
    size_t size;
} slList;

slList* slList_init()
{
    slList* ret = NULL;
    return ret;
}

void slList_add(slList* me, void* data, size_t size)
{
    slList* tmp = malloc(sizeof(slList));
    tmp->size = size;
    tmp->data = malloc(size);
    memcpy(tmp->data, data, size);
    tmp->next = NULL;

    me = malloc(sizeof(slList));
    me = tmp;
}
