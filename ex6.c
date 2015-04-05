#include <stdio.h>

int main(int argc, char* argv[]) {

    int distance = 100;
    float power = 2.345f;
    double super_power = 55789.4532;
    char initial = 'A';
    char first_name[] = "Titus";
    char last_name[] = "Soporan";
    int oct = 0x123;

    printf("I am %d miles away. My power is %f. I have %f super powers. My initial is %c. My first name is %s. MY last name is %s.",
            distance,
            power,
            super_power,
            initial,
            first_name,
            last_name
    );

    printf("Octal: %o\n",  oct);

    printf("\n\t\r");
    return 0;

}
