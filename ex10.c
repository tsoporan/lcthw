#include <stdio.h>

int main(int argc, char* argv[]) {
    int i = 0;

    argv[4] = "ABC";

    for(i = 1; i<argc; i++) {
        printf("arg %d : %s\n", i, argv[i]);
    }


    // our own array of strings
    char* states[] = {
        "california", "oregon",
        "washington", NULL
    };


    int num_states = 4;

    states[0] = argv[0];

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;

}
