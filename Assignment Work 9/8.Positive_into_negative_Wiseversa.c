/*
 * Assignment - 9
 * Question - 8
 * @topic - switch case control
 * @author - Abhijeet Kumar Singh
 */
 
 /* Program to convert a positive number into a negative number and negative number
into a positive number using a switch statement.
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number\n");
	scanf("%d", &n);
	switch(n < 0)
	{
		case 0:
		n = n * (-1);
	    break;
		case 1:
			n = n * (-1);
			break;
	}
	printf("%d", n);
	return 0;
}
