#include <stdio.h>

int main(int argc, char* argv[]) {

    if (argc != 2) {
        printf("You need one argument.\n");
        return 1;
    }

    int i = 0;
    for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];

        switch(letter) {
            case 'a':
            case 'A':
                printf("vowel at %d is %c\n", i, letter);
                break;

            case 'e':
            case 'E':
                printf("vowel at %d is %c\n", i, letter);
                break;

            case 'i':
            case 'I':
                printf("vowel at %d is %c\n", i, letter);
                break;

            case 'o':
            case 'O':
                printf("vowel at %d is %c\n", i, letter);
                break;

            case 'u':
            case 'U':
                printf("vowel at %d is %c\n", i, letter);
                break;

            default:
                printf("%c at %d is not a vowel\n", letter, i);
        }
    }

    return 0;
}
