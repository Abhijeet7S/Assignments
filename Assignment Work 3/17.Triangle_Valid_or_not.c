/*
 * Assignment - 3
 * Question - 17
 * @topic - Decision Control Statement
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not

*/

#include<stdio.h>
int main()
{
	int side_1, side_2, side_3, sum;
	printf("Enter side 1\n");
	scanf("%d", &side_1);
	printf("Enter side 2\n");
	scanf("%d", &side_2);
	printf("Enter Side 3\n");
	scanf("%d", &side_3);
	if((side_1 + side_2) > side_3 || (side_2 + side_3) > side_1 || (side_3 + side_1) > side_2)
	printf("Valid Triangle");
	else
	printf("Invalid Triangle");

	return 0;
}
