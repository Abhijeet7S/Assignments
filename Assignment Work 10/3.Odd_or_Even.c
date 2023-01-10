/*
 * Assignment - 10
 * Question - 3
 * @topic - Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)
*/

#include<stdio.h>
int odd_even(int n)
{
	int b;
	b = n%2==0 ? 1 : 0;
	return b;
}
int main()
{
	int num;
	printf("Enter Number:\n");
	scanf("%d", &num);
	int x = odd_even(num);
	printf("%d", x);
	return 0;
}
