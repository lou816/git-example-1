#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
  
int main(){  
    unsigned long p = 0, n = 0;  
    long double r = 0,NT = 0, sum = 0;  
    scanf("%llf\n%ld\n%ld", &r,&n,&p);  
    r+=1;
    for(int i = 0; i < n; i++){  
        NT+=(long double)p;  
        NT= (long double)NT*r;  
    }  
    printf("%ld\n",(unsigned long int)NT);  
    return 0;  
}  