#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 26.50f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";

    char fArray[4];

    memcpy(fArray, &power, sizeof(float)); 

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super power\n", super_power);
    printf("I have an initial %c\n", initial);
    printf("I have a first name %s\n", first_name);
    printf("I have a last name %s\n", last_name);
    printf("My whole name is %s %c. %s\n", first_name, initial, last_name);

    printf("0x%02x, 0x%02x, 0x%02x, 0x%02x\n", fArray[0], fArray[1], fArray[2], fArray[3]);

    return 0;
}

