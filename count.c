//Matthew Tran
// Description: Counts number of words in text file 

// including libraries
#include <stdio.h>
#include <stdlib.h>

// define max word length
#define MAX_WORD_LENGTH 30


int main (int argc, char *argv[])
{


    int i;
    // check correct number of arguments
    if ( argc != 2)
    {
        printf("oops, need exactly one filename\n");
        exit(1);
    }

/*
    for (i = 0; i<argc;i++)
    {
        printf("%d %s\n", i, argv[i]);
    }

    */

    // File pointers
    FILE *fp;
    fp = fopen(argv[1],"r");

    // Make sure the file is not NULL
    if (fp == NULL)
    {
        printf("Could not open\n");
        exit(1);
    }

    // The current word
    char currentWord[MAX_WORD_LENGTH + 1];

    // Number of words
    int wordCounter = 0;

    // Loops through file and increments wordCounter until no words left
    while(fscanf(fp,"%s",currentWord) == 1)
    {
        wordCounter++;
    }

    // prints out the total words
    printf("%d total words\n", wordCounter);



    


}

