#include "todo.h"

int main(int argc, char **argv) {
    newEvent("Lava l'insalata.");
    newEvent("Fai i compiti.");
    newEvent("Prepara la cena.");
    print_events();
    return 0; // actually frees my pc from this buggy software.
}