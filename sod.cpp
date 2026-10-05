/*wap to calculate da sum of digits*/
#include <stdio.h>
int main(){
	int n,sum=0,d;
	scanf("%d",&n);
	while (n!=0){
		d=n%10;
		sum+=d;
		n=n/10;
	}
printf("SUM ---> %d",sum);
return 0;
}
