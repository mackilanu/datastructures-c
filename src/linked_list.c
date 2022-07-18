#include "linked_list.h"
#include <stdio.h>

struct node {
    void *value;
    struct node *next;
};
struct ds_llist {
    struct node *head;
};

ds_llist *ds_llist_new() {
    ds_llist* l;
    l = (ds_llist*)calloc(1, sizeof(*l));
    l->head = l;
    l->head->next = NULL;

    return l;
}

ds_llist *ds_llist_next(ds_llist *l, node *p) {
    if(ds_llist_end(l, p)) {
        fprintf(stderr, "Warning! A ds_llist is moving past it's last element.");
    }

    return p->next;
}

ds_llist *ds_llist_first(ds_llist *l) {
    return l->head;
}

bool ds_llist_is_empty(ds_llist *l) {
    return (l->head->next == NULL);
}

bool ds_llist_end(ds_llist *l, node *p) {
    return (p->next == NULL);
}
