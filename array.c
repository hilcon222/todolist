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
    for (int count = 0; count < newElem; count++) { // python for loops are better
        if (buf[count] == NULL) break; // if we stumbled upon a piece of shit exit the loop
        printf("[%3d] ", count); // print the number of the event
        print_event(buf[count]); // print the actual event
    }
}

void remove_event(int index) {
    if (buf[index] == NULL) return; // obviously you can't "delete" something that is already empty
    for (int count = index; count < MAXSIZ; count++) { // basically rearranges all the events.
        buf[count] = buf[count + 1];
    }
}

void remove_event(int index) {
    if (index >= MAXSIZ) return;
    buf[index] = NULL;
    
}