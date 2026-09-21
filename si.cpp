#include <stdio.h>
int main(){
	float p,r,t;
	float si;
	printf("Enter the Principle : \n");
	scanf("%f",&p);
	printf("Enter the Rate :  \n");
	scanf("%f",&r);
	printf("Enter the Time :  \n");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("Simple Interest : %f \n",si);
}
