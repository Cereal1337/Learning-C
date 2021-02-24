#include<stdio.h>

void main() {
    char characterName[] = "John"; // Creates the variable characterName which will have more than one character because of the []
    int characterAge = 35; // integer variable
    // double characterAge = 28.5; // use for decimals
    
    printf("There once was a man named %s\n", characterName); // prints string to console
    printf("he was %d years old.\n", characterAge);
    printf("He really liked the name %s\n", characterName); // prints the string and replaces %s with the characterName variable
    printf("but did not like being %d.\n", characterAge); // Don't forget to use a ; at the end of each line
}