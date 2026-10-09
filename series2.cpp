//1-3+5-7+9-........n
#include <stdio.h>
int main(){
	int n,final=0;
	scanf("%d",&n);
	int i=1,a=1;
	while (i<=n){
		if (i%2==0)
		   final=final-a;
		else
			final=final+a;  
		i++;
		a+=2;
	}
	printf("Final = %d\n",final);
	return 0;
}