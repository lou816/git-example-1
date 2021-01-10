#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
  
int main(){  
    int a = 0;  
    int negative = 0;  
    while(scanf("%d",&a) != EOF){  
        negative = 0;
        //負數之後用2補數  
        if(a < 0){  
            negative = 1;  
            a = a*-1;  
        }  
        int bit[8];  
        for(int i = 0; i < 8; i++){  
            bit[i] = 0;  
        }
        //計算二進制  
        for(int i = 0, j = 7; i < 8; i++, j--){  
            if(a%2 == 1)  
                bit[j] = 1;  
            a = a/2;  
        }     
        if(negative == 0){  
            for(int i = 0; i < 8; i++)  
                printf("%d",bit[i]);  
        }  
        else{
            //轉1補數  
            for(int i = 0; i < 8; i++){  
                if(bit[i] == 1)  
                    bit[i] = 0;  
                else  
                    bit[i] = 1;  
            }  
            bit[7]+=1;
            //轉2補數  
            for(int i = 7;i >= 0; i--){  
                if(bit[i] > 1){  
                    bit[i] = 0;  
                    bit[i-1]++;  
                }  
            }  
  
            for(int i = 0; i < 8; i++)  
                printf("%d",bit[i]);  
                        }  
        printf("\n");  
    }  
}