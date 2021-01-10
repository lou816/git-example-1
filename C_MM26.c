#include<stdio.h>
#include <math.h>


int main(){
	//題目名稱無法設定為檔名
	//名稱為:輸出 1*1、2*2、...、N*N之結果
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int i;
        for(i=1;i<=a;i++)
            printf("%d*%d=%d\n",i,i,i*i);
    }

    return 0;
}
