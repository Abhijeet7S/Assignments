/*
 * Assignment - 11
 * Question - 10
 * @topic - More on Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function.
 */
 
 #include<stdio.h>
 int fact(int);
 void sum(int);
 int main()
 {
 	sum(5);
 	return 0;
 }
 
 void sum(int n)
 {
 	int i, sum = 0;
 	for(i = 1; i <= n; i++ )
 	{
 		sum = sum + fact(i)/i;
	 }
	 printf("sum of Series = %d", sum);
 }
 
 int fact(int x)
{
	int f = 1;
	while(x >= 1)
	{
		f = f * x;
		x--;
	}
	return (f);
}
