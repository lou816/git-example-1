#include <stdio.h>  
  
int main(){   
    int a = 0;  
    int b = 0;  
    while(scanf("%d",&a) != EOF){  
        b = 0;  
        for(int i = 1; i <= a; i++)  
            if(i%3 == 0)  
                b+=i;  
        printf("%d\n",b);  
    }   
}