// write a program to print all input lines that are longer than 30 characters
#include <stdio.h>
#define MAXLINELENGTH 1000

// function prototypes
int getLine(char store[], int limit);
void copy(char to[], char from[]);

int main()
{
    int length;
    int lengthCheck = 5;
    char line[MAXLINELENGTH];
    char aboveThirty[MAXLINELENGTH];

    while ((length = getLine(line, MAXLINELENGTH)) > 0)
    {
        if (length >= lengthCheck)
        {
            copy(aboveThirty, line);
        }
    }
    if(length > 6)
    {
        printf("%s", aboveThirty);
    }
    else
    {
        printf("There was no line above 5 characters provided");
    }
    
    return 0;
}

/**
 * getLine: read a line into store, return length
 * input a line, and a maxline limit, returns length
 */
int getLine(char store[], int limit)
{
    int i, c;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        store[i] = c;
    }
    store[i] = '\0';

    return i;
}

/**
 * copy : copy 'from' into 'to'; assume to is large enough
 * copies text
 *
 */
void copy(char to[], char from[])
{

    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}