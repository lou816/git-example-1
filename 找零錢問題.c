#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
  
int main(){  
    int NT = 0;  
    int apple = 0, orange = 0, peach = 0;  
    scanf("%d,%d,%d,%d",&NT,&apple,&orange,&peach);  
    if(apple*15+ orange*20+ peach*30 > NT)  
        printf("0\n");  
    else{
        //從50開始找零找出最少硬幣數組合  
        NT -= apple*15+ orange*20+ peach*30;  
        int d_50 = 0, d_5 = 0, d_1 = 0;  
        d_50 = NT/50;  
        NT = NT%50;  
        d_5 = NT/5;  
        NT = NT%5;  
        d_1 = NT;  
        printf("%d,%d,%d\n",d_1,d_5,d_50);  
    }  
    return 0;  
}