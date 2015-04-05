#include <stdio.h>

int main(int argc, char* argv[]) {
    int i = 0;

    if (argc == 1) {
        printf("You only have one argument.\n");
    } else if (argc > 1 && argc < 4) {
        printf("args:\n");

        for (i = 0; i < argc; i++) {
            printf("arg %d: %s\n", i, argv[i]);
        }

        printf("\n");
    } else {
        printf("Too many arguments");
    }


    return 0;
}
