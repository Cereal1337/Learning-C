#include <stdio.h>

void main()
{

    int num = 5;
    printf("%d\n", num);
    num = 8;                // The variable can be modified 
    printf("%d\n", num);

    const int NUM = 5; // Some programmers make constants in all caps to make it clear that their constant 
    printf("%d\n", num);
    //num = 8; // The variable can't be modified because it is a constant
    printf("%d\n", num);
}