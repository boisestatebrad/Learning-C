// #include <stdio.h>
// #define MAXLINELENGTH 1000 

// int max; // maximon length seen so far 
// char line[MAXLINELENGTH]; // current input line
// char longest[MAXLINELENGTH]; // longest line saved here

// //function prototypes
// int getLine(void);
// void copy(void);


// int main(){

//     int len; // current line length
//     extern int max;
//     extern char longest[];

//     max = 0; 
//     while((len = getLine()) > 0 ){ //call getLine to get take in keyboard input, we set maxlength in this function call, save returned int into len, check if larger than 0;  
//         if(len > max){
//             max = len;
//             copy();
//         }
//     }
//     if(max > 0){ // if there is anylines
//         printf("%s", longest); // return longest as a string
//     }
//     return 0;
// }

// /**
//  * getLine: read a line into s, return length
//  * input a line, and a maxline limit, returns length
//  */
// int getLine(void){

//     int c, i; 
//     extern char line[];

//     for(i=0; i < MAXLINELENGTH-1 && (c = getchar()) != EOF && c != '\n'; ++i){
//         line[i] = c;
//     }

//     if(c == '\n'){
//         line[i] = c;
//         ++i;
//     }

//     line[i] = '\0';
//     return i;
// }

// /**
//  * copy : copy 'from' into 'to'; assume to is large enough 
//  * copies text 
//  * 
//  */
// void copy(void){
//     int i;
//     extern char line[], longest[];

//     i=0;
//     while((longest[i] = line[i]) != '\0'){
//         ++i;
//     }
// }


#include <stdio.h>

#define MAXLINELENGTH 1000

int max;                          // maximum length seen so far
char line[MAXLINELENGTH];         // current input line
char longest[MAXLINELENGTH];      // longest line saved here

int getLine(void);
void copy(void);

int main(void) {
    int len;

    max = 0;
    while ((len = getLine()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }
    if (max > 0) {
        printf("%s\n", longest);  // print longest line and add newline
    }
    return 0;
}

/* getLine: read a line into global `line`, return its length */
int getLine(void) {
    int c, i;

    for (i = 0; i < MAXLINELENGTH - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }

    // If newline was read, you can either keep it or strip it.
    if (c == '\n') {
        // Keep newline:
        // line[i++] = '\n';

        // Or strip newline (recommended for embedding in sentences):
        // do nothing, just don't store it
    }

    line[i] = '\0';
    return i;
}

/* copy: copy global `line` to global `longest` */
void copy(void) {
    int i = 0;
    while ((longest[i] = line[i]) != '\0') {
        ++i;
    }
}
