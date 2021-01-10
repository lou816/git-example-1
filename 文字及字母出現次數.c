#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
  
int main(){  
    char line[1025];  
    fgets(line,1024,stdin);  
    int abc[26] = {0};  
    char *ptr = line;  
    int word = 0;  
    for(int i = 0; i < strlen(line); i++){  
        if(*ptr == ' ')  
            word++;  
        ptr++;  
    }  
    if(line[0] == '\0')  
        printf("0\n");  
    else{  
        printf("%d\n",word+1);  
    }  
    ptr = line;  
    for(int i = 0; i < strlen(line); i++){ 
        //不分大小寫 
        if(*ptr >= 65 && *ptr < 97)  
            abc[*ptr-65]++;  
        if(*ptr >= 97 && *ptr < 122)  
            abc[*ptr-97]++;  
        ptr++;  
    }  
    for(int i = 0 ; i < 26; i++){  
        if(abc[i] != 0)  
            printf("%c : %d\n", 97+i, abc[i]);  
    }  
}