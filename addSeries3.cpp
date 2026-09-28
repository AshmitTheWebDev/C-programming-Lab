//S = 1+2+4+7+11+....N terms.
#include <stdio.h>
int main(){
	int n,sum=0;
	int var=0;
	scanf("%d",&n);
	int i=1;int count=1;
	while (i<=n){
		sum+=count;
		count++;
		count=count+var;
		var++;	
		i++;
	}
	printf("%d",sum);
	return 0;
}
