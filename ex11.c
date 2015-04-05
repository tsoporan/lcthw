#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int num_states = 4;

    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    while(i < argc) {
        if (i > num_states) {
            break;
        }
        states[i] = argv[i];

        i++;
    }

    i = 0;
    while(i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    return 0;
}
