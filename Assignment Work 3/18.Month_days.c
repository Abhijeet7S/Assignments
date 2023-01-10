/*
 * Assignment - 3
 * Question - 18
 * @topic - Decision Control Statement
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a program which takes the month number as an input and display number of
days in that month.
*/

#include<stdio.h>
int main()
{
	int month_num;
	printf("Enter Month Number\n");
	scanf("%d", &month_num);
	if(month_num == 4 || month_num == 6 ||month_num == 9 || month_num == 11)
	printf("Number of days = 30");
	else if(month_num == 2)
	printf("Number of days = 28/29");
	else
	printf("Number of day = 31");
	return 0;
}
