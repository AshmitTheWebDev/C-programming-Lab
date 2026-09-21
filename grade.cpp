/*wap to take input marks of a student and display the grades according to thr following conditions:-
if marks >=90,A
marks >=75,B
marks>=50,C
otherwise F */

#include <stdio.h>
int main(){
	int marks;
	printf("Enter marks of the student :- \n");
	scanf("%d",&marks);
	if (marks>=90)
	printf("Grade A");
	else if (marks>=75)
	printf("Grade B");
	else if (marks>=60)
	printf("Grade C");
	else 
	printf("Grade F");
}

