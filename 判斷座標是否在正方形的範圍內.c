#include<stdio.h>
#include <math.h>

int main(){
    int a,b;
    //xy是否小於邊長且大於0
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int judge=1;
        if(a<0||b<0||a>100||b>100)
            judge=0;
        if(judge==0)
            printf("outside\n");
        else
            printf("inside\n");
    }

    return 0;
}
