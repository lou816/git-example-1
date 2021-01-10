#include<stdio.h>
#include <math.h>


int main(){

    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int nt10=0,nt5=0,nt1=0;
        nt10=a/10;
        a=a-(nt10*10);
        nt5=a/5;
        a=a-(nt5*5);
        nt1=a/1;
        printf("NT10=%d\n",nt10);
        printf("NT5=%d\n",nt5);
        printf("NT1=%d\n",nt1);
    }

    return 0;
}
