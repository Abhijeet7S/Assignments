/*
 * Assignment - 7
 * Question - 3
 * @topic - Level up with loops
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a program to check whether a given number is there in the Fibonacci series or
not.
*/

#include<stdio.h>
int main()
{
	int num, a = 0, b = 1,c = 0;
	printf("Enter Number\n");
	scanf("%d", &num);
	while(c < num)
	{
		c = a + b;
		a = b;
		b = c;
		
	}
	if(c == num)
	printf("%d is in Fabonacci Series", num);
	else
	printf("%d is not in Fabonacci Series", num);
	return 0;
}
