#include <stdio.h>

int main()
{
    int doses[] = {1, 3, 2, 1000};

    printf("First dose is %i\n", doses[0]);
    // works like printf above since the address to an array is the first item inside the array
    printf("First dose is %i\n", *doses);

    // 2 ways to get dose at index 1
    printf("The dose at index 1 is %i\n", *(doses + 1));
    printf("The dose at index 1 is %i\n", doses[1]);

    // 2 ways to get dose at index 2
    printf("The dose at index 2 is %i\n", *(doses + 2));
    printf("The dose at index 2 is %i\n", doses[2]);

    // 2 ways to get dose at index 3
    printf("The dose at index 3 is %i\n", *(doses + 3));
    printf("The dose at index 3 is %i\n", doses[3]);

    printf("So, the dose issused was %i\n", 3 [doses]); // 3 [doses] === doses[3]

    // skip till the 7th character
    char *amysMessage = "Don't call me!";
    skip(amysMessage);

    return 0;
}

// skip the
void skip(char *msg)
{
    puts(msg + 6);
}