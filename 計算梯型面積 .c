#include<stdio.h>
int main()
{
    float a,b,c;
    while(scanf("%f %f %f",&a,&b,&c)!=EOF)
        printf("Trapezoid area:%.1f\n",(a+b)*c/2);

    return 0;
}
