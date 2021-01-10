#include <stdio.h>  
  
int main(){   
    int a = 0;  
    int b = 0;  
    //一個數字沒有辦法被他0~一半之間的數字整除,就示質數
    while(scanf("%d",&a) != EOF){  
        b = 0;    
        if(a == 1){  
            printf("NO\n");  
            continue;  
        }  
        if(a == 2){  
            printf("YES\n");  
            continue;  
        }  
        for(int i = 2; i < (a/2)+1; i++){  
            if(a%i == 0){  
                printf("NO\n");  
                b = 1;  
                break;  
            }  
        }  
        if(b == 0)  
            printf("YES\n");  
    }  
}  