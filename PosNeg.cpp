/*wap which reads an int value and check whether it is +ve or not after satisfying the int value > than
zero . If it is positive then check whether it is odd or even.*/
#include <stdio.h>
int main(){
	int n;
	printf("Enter a value :- ");
	scanf("%d",&n);
	if (n>0){
	printf("Positive \n");
	if (n%2==0)
	printf("Number is even \n");
	else
	printf("Number is odd \n");
	}
	else if (n<0)
	printf("Negative \n");
	else
	printf("Entered number is zero. \n");
	return 0;
}
