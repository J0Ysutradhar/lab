#include <stdio.h>

// Global variable (scope: whole program, lifetime: entire run, memory: global/static area)
int globalVar = 10;

// extern variable declaration (defined in extern.c)
extern int externVar;

void demoFunction() {
    // Local variable (scope: this function, lifetime: until function ends, memory: stack)
    int localVar = 5;

    // Static variable (scope: this function, lifetime: entire program run, memory: global/static area)
    static int staticVar = 0;

    // Auto variable (default for local variables, scope: this block, lifetime: until block ends, memory: stack)
    auto int autoVar = 20;

    printf("\nInside demoFunction:\n");
    printf("Local Variable: %d\n", localVar);
    printf("Static Variable (persists between calls): %d\n", staticVar);
    printf("Auto Variable: %d\n", autoVar);

    staticVar++; // will keep its value next time
}

int main() {
    printf("Global Variable: %d\n", globalVar);
    printf("Extern Variable (from another file): %d\n", externVar);

    demoFunction();
    demoFunction(); // call again to show staticVar persistence

    return 0;
}
