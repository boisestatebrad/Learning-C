#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

/**
 * counts lines words an ccharacters in input
 */
// int main()
// {
//     int character, nextLine, nextWord, nextCharacter, state;

//     state = OUT;
//     nextCharacter = nextLine = nextWord = 0;
//     while ((character = getchar()) != EOF)
//     {
//         ++nextCharacter;
//         if (character == '\n')
//         {
//             ++nextLine;
//         }
//         if (character == ' ' || character == '\n' || character == '\t')
//         {
//             state = OUT;
//         }
//         else if (state == OUT)
//         {
//             state = IN;
//             ++nextWord;
//         }
//     }
//     printf("lines: %d words: %d characters: %d\n", nextLine, nextWord, nextCharacter);

    // }

    /**
     * prints its input one word per line
     */

    int main() {
    int character;
    int state = OUT;

    while ((character = getchar()) != EOF) {
        if (character == ' ' || character == '\n' || character == '\t') {
            if (state == IN) {
                // End of a word
                putchar('\n');
                state = OUT;
            }
        } else {
            // Inside a word
            putchar(character);
            state = IN;
        }
    }

    return 0;
}