#include<stdio.h>
#include <math.h>


int main(){

    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int n1,n_100,n_10,n_1;
        //以下為取出他的個位十位百位數
        n1=n;
        n_100=n/100;
        n=n%100;
        n_10=n/10;
        n_1=n%10;
        if((n_100*n_100*n_100+n_10*n_10*n_10+n_1*n_1*n_1) == n1)//判斷阿姆斯壯數
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
