#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct node node;
typedef struct ds_llist ds_llist;

ds_llist *ds_llist_new();
ds_llist *ds_llist_next(ds_llist *l, node *p);
ds_llist *ds_llist_first(ds_llist *l);
bool ds_llist_is_empty(ds_llist *l);
bool ds_llist_end(ds_llist *l, node *p);


#endif