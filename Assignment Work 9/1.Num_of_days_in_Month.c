/*
 * Assignment - 9
 * Question - 1
 * @topic - switch case control
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a program which takes the month number as an input and display number of
days in that month
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Month Number\n");
	scanf("%d", &n);
	if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
	printf("Number of days = 31");
	else if( n== 2)
	printf("Number of Day = 28/29");
	else
	printf("Number of Days = 30");
	return 0;
}
