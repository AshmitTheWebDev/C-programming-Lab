//Celsius to Fahrenheit
#include <stdio.h>
int main(){
	float c,f;
	printf("Enter temp in celsius : \n");
	scanf("%f",&c);
	f=((9*c)/5)+32;
	printf("Temp in Fahrenheit = %f \n",f);
	return 0;
}
