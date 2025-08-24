#include <stdio.h>
#define MAXLINELENGTH 1000 

//function prototypes
int getLine(char line[], int maxLine);
void copy(char to[], char from[]);
int main(){

    int len; // current line length
    int max; // maximon length seen so far 
    char line[MAXLINELENGTH]; // current input line
    char longest[MAXLINELENGTH]; // longest line saved here

    max = 0; 
    while((len = getLine(line, MAXLINELENGTH)) > 0 ){ //call getLine to get take in keyboard input, we set maxlength in this function call, save returned int into len, check if larger than 0;  
        if(len > max){
            max = len;
            copy(longest, line);
        }
    }

    if(max > 0){ // if there is anylines
        printf("\nThe longest line was: \"%s\" which was very long!", longest ); // return longest as a string
    }
    else{
        printf("\nThere was no line provided...");
    }
    return 0;
}

/**
 * getLine: read a line into s, return length
 * input a line, and a maxline limit, returns length
 */
int getLine(char s[], int lim){

    int c, i; 
  

    for(i=0; i<lim-1 && (c = getchar()) != EOF && c!= '\n'; ++i){
        s[i] = c;
    }

    s[i] = '\0';
    return i;
}

/**
 * copy : copy 'from' into 'to'; assume to is large enough 
 * copies text 
 * 
 */
void copy(char to[], char from[]){
    int i;
    i = 0;

    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}