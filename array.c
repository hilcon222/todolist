#include "todo.h"

todo *buf[MAXSIZ] = {NULL}; // assigns memory for a buffer. Yeah, the stack will take care.
/* How this buffer is supposed to work:
*event *event *event *event NULL
   How it will probably work: it won't */
int newElem = 0;

int append(todo *event) {
    if (newElem >= MAXSIZ-1) {
        return false; // not enough space! YIKES!
    }
    buf[newElem++] = event;
    buf[newElem] = NULL; // yeah we gotta set up this crappy terminator everytime we append something
}

void print_events(void) {
    for (int count = 0; count < newElem; count++) {
        if (buf[count] == NULL) break;
        printf("[%3d] ", count);
        print_event(buf[count]);
    }
}

void remove_event(int index) {
    if (index >= MAXSIZ) return;
    buf[index] = NULL;
    
}