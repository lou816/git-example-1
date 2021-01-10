#include <stdio.h>  
  
int main(){  
    int x = 0,y = 0;  
    int distance = 0;
    //x^2+y^2要小於半徑平方就在圓內  
    while(scanf("%d %d",&x,&y) != EOF){  
        distance = 0;  
        x = x*x;  
        y = y*y;  
        distance = x+y;  
        if(distance>10000)  
            printf("outside\n");  
        else{  
            printf("inside\n");  
        }  
    }  
}  