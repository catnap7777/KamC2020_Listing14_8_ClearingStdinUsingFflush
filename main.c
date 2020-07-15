
//Listing 14.8 - Clearing stdin of extra characters using fflush; page 344

#include <stdio.h>

int main(void)
{
    int age;
    char name[20];

    puts("\nEnter your age:");
    scanf("%d", &age);

    fflush(stdin);

    puts("\nEnter your first name:");
    scanf("%s", name);

    printf("\nYour age is %d:", age);
    printf("\nYour first name is %s\n", name);

    return 0;


}
