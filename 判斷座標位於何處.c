#include<stdio.h>
#include <math.h>


int main(){
    int x,y;    
    //判斷象限以及原點
    while(scanf("%d %d",&x,&y)!=EOF)
        if(x!=0&&y==0)
            printf("x-axis\n");
        else if(x==0&&y!=0)
            printf("y-axis\n");
        else if(x==0&&y==0)
            printf("Origin\n");
        else if(x>0&&y>0)
            printf("1st Quadrant\n");
        else if(x>0&&y<0)
            printf("4th Quadrant\n");
        else if(x<0&&y>0)
            printf("2nd Quadrant\n");
        else if(x<0&&y<0)
            printf("3rd Quadrant\n");


    return 0;
}
