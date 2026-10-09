//s = 1+10+101+1010....n
#include <stdio.h>
int main(){
	int i=1,n,sum=0,a=1;
	scanf("%d",&n);
	while(i<=n){
		sum=sum+a;
  		if (i%2==0)
  		   a=a*10+1;
  		else 
		  a=a*10; 
  		  i++;
	}
	printf("%d\n",sum);
}