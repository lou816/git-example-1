#include<stdio.h>
#include <math.h>


int main(){
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
        b=1;
        for(int i=0;i<a;i++)
            b=b*2;
        if(a>30)
            printf("Value of more than 31\n");
        else
            printf("%d\n",b);
    }

    return 0;
}
