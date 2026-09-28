/*wap to find the sum of the series ---> S = 2+5+8+11+14+...n terms.*/
#include <stdio.h>
int main(){
	int s=0,n;
	scanf("%d",&n);
	int i=1;
	int term=2;
	while (i<=n){
		s+=term;
		term=term+3;
		i++;
	}
	printf("%d\n",s);
	return 0;
}
