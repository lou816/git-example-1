#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
  
int main(){  
    int a = 0;  
    char buf[100];    
    char *start,*end;  
    int len = 0;  
    while(scanf("%d",&a) != EOF){
        //兩指標指頭尾往中間移    
        sprintf(buf, "%d", a);  
        len = strlen(buf);  
        start = buf;end = buf;  
        end += len-1;  
        int button = 0;   
        //確保移動到最後奇數字元會指標重疊,偶數則相鄰
        if(len%2 == 1){  
            len++;  
        }  
        for(int i = 0; i < len/2; i++){  
            if(*start == *end){  
                start++;  
                end--;  
            }  
            else{  
                button = 1;  
                printf("NO\n");  
                break;  
            }  
        }  
        if(button == 0){  
            if(*start == *end)  
                printf("YES\n");  
            else  
                printf("NO\n");  
        }  
    }  
    return 0;  
}