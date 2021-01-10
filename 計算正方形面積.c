#include <stdio.h>

int main(){
	double a = 0;
	double b= 0;
	while(scanf("%lf",&a)!= EOF){
		b = a*a +0.01;
		printf("%.1lf\n",b);
	}
}