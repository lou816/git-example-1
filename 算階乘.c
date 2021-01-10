#include <stdio.h>

int main(){
	//注意overflow
	
	int n = 0;
	while(scanf("%d",&n)!=EOF){		
		unsigned long long a = 1;
		for(int i = 1; i <= n; i++){
			a = a*i;
		}
		printf("%lld\n",a);
	}
}