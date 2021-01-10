#include<stdio.h>
#include <math.h>


int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        while(1){
            int big,s1,s2,judge=1;
            if(a >= b && a >= c){
                big=a;
                s1=b;
                s2=c;
            }
            else if( b >= a && b >= c){
                big=b;
                s1=a;
                s2=c;
            }
            else{
                big=c;
                s1=a;
                s2=b;
            }
            //以下為各種三角型or非三角型的判斷式
            if(s1+s2 <= big){
                printf("Not Triangle\n");
                break;
            }
            else if(s1*s1+s2*s2 == big*big){
                printf("Right Triangle\n");
                break;
            }
            else if(s1*s1+s2*s2 >= big*big){
                printf("Acute Triangle\n");
                break;
            }
            else if(s1*s1+s2*s2 <= big*big){
                printf("Obtuse Triangle\n");
                break;
            }
        }
    }

    return 0;
}
