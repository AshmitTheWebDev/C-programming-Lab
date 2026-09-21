/*wap to calculate the elec bill based on the number of units consumed.
The charges are :-
0-100 ---> 2 rupees per unit
101-200 ---> 3 rupees 
201-300--->5 rupees
above 300 ---> 7 rupees*/

#include <stdio.h>
int main(){
	float unit,bill;
	printf("Enter units :- \n");
	scanf("%f",&unit);
	if (unit<=100)
	bill=2*unit;
	else if (unit<=200)
	bill = 2*100+(unit-100)*3;
	else if (unit<=300)
	bill = 2*100+3*100+(unit-300)*5;
	else 
	bill = 2*100+3*100+5*100+(unit-300)*7;
	printf("%.2f rupees to be paid :-\n",bill);
	return 0;
}
