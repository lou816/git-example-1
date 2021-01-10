#include<stdio.h>
#include <math.h>


int main(){
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        int i=0,num=0;
        if(n==1)
            printf("1 = 1\n");
        else
        {
            printf("1");
            for(i=1; i<=n; i++)
            {
                num=num+i;
                if(i!=1)
                    printf(" + %d",i);
            }
            //加總後印出
            printf(" = %d\n",num);
        }
    }

    return 0;
}
