#include "todo.h"

void print_event(todo *event) {
    printf("(%c)  %s\n", (event->completed) ? '*' : ' ', event->description);
}

todo *alloc_event(char *description) {
    todo *ev = (todo *) malloc(sizeof(todo));
    *ev = (todo){strdup(description), TODO};
    return ev;
}