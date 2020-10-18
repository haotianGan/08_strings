#include <stdio.h>
#include <string.h>

int mystrlen(char *s){
    char *pointer = s;
    int output = 0;
    while(*pointer){
        output++;
        pointer++;
    }
    return output;
}

int mystrcmp(char *s1, char *s2) {
    int c;
    for (c = 0; s1[c] == s2[c]; c++){
        if (s1[c] == '\0') return 0;
    }
    return s1[c] < s2[c] ? -1 : 1;
}

char * mystrncpy( char *dest, char *source, int n){
    char *temp_dest = dest;
    int i = 0;
    while(i < n){
        *temp_dest = *source;
        if(*source == 0) break;
        temp_dest++;
        source++;
        i++;
    }
    return dest;
}

char* mystrcat( char *dest, char *source ){
    char *temp_dest = dest;
    while (*temp_dest) temp_dest++;
    while(*source){
        *temp_dest = *source;
        temp_dest++;
        source++;
    }
    temp_dest = 0;
    return dest;
}

char * mystrchr( char *s, char c ){
    while(*s != 0){
        if(*s == c) return s;
        s++;
    }
    if(*s == c) return s;
    return 0;
}

