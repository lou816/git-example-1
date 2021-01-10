#include <stdio.h>  
  
int count (int a){  
    if(a == 0)  
        return 1;  
    if(a == 1)  
        return 2;  
    if(a > 1)  
        return(count(a-1) + count(a/2));  
}  
int main(){   
    int a = 0;  
    scanf("%d", &a);  
    a = count(a);  
    printf("%d\n",a);    
}