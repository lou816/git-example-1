#include <stdio.h>  
  
int main(){  
    int a = 0;  
    double b = 0;  
    while(scanf("%d",&a) != EOF){  
        b = 0;  
        b = (double)(a * 1.6);  
        printf("%.1lf\n",b);  
    }  
}  