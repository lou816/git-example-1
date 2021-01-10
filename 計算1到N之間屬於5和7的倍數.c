#include<stdio.h>
#include <math.h>


int main(){
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a = n/35;
        //同時為5,7被數所以*35
        for(int i = 0; i < n; i++){
            if(i == n-1)
                printf("%d\n",i*35);
            else{
                printf("%d ",i*35);
            }
        }
    }

    return 0;
}
