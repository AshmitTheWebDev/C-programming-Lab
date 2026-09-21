#include <stdio.h>
int main(){
	float c,f;
	printf("Enter temp in Fahrenheit : \n");
	scanf("%f",&f);
	c=5*(f-32)/9;
	printf("Temp in Celsius : %f \n",c);
	return 0;
}
