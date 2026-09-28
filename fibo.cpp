/*WAP to display the fibonacci series.*/
#include <stdio.h>
int main(){
	int n;
	int a=-1,b=1;
	int sum=0;
	scanf("%d",&n);
	int i=1;
	while (i<=n){
		sum=a+b;
		printf("%d\n",sum);
		a=b;
		b=sum;
		i++;
	}
}
