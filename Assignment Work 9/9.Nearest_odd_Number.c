/*
 * Assignment - 9
 * Question - 9
 * @topic - switch case control
 * @author - Abhijeet Kumar Singh
 */
 
 /* Program to Convert even number into its upper nearest odd number Switch
Statement.
*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter Any number\n");
	scanf("%d", &n);
	switch(n % 2 == 0)
	{
		case 0:
			printf("%d", n);
			break;
			case 1:
				printf("%d", n+1);
				break;
	}
	return 0;
}
