#include<stdio.h>

int main(){

    int a;
    while(scanf("%d",&a)!=EOF){
        if(a%4 == 0){
            //4 的倍數，但可被100整除就不是閏年,但是可被400整除就是閏年
            if(a%100 == 0 && a%400 != 0)
                printf("Common Year\n");
            else if(a%100 == 0 && a%400 == 0)
                printf("Bissextile Year\n");
            else
                printf("Bissextile Year\n");
        }
        else
            printf("Common Year\n");
    }

    return 0;
}
