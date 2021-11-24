#include <stdio.h>
#include <stdlib.h>

int main()
{
    int locked = 1;
    char name[10];

    printf("What is your name?\n");
    scanf("%s", &name);

    printf("\n###\nStoring name at %p\n###\n", &name);
    printf("Hello, %s!\n\n", name);

    // user enters name

    printf("Checking if door is locked... (locked = %d)\n", locked);

    if (locked == 1) {
        printf("Sorry, the door is locked. Better luck next time, %s.\n", name);
    } else {
        printf("Door is unlocked, welcome in, %s\n", name);
    }
    return 0;
}
