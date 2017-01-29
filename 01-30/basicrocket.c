#include <stdio.h>

void printBox(void) {
    printf("  ------\n");
    printf("  |    |\n");
    printf("  |    |\n");
    printf("  ------\n");
}

void printCone(void) {
    printf("    /\\\n");
    printf("   /  \\\n");
    printf("  /    \\\n");
    printf("  ------\n");
}

void drawRocketShip(void) {
    printCone();
    printBox();
    printCone();
}

// Declarations the draw* functions described above...

int main(void) {
    drawRocketShip();
}
