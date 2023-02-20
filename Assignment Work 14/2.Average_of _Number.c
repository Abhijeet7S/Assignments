/*
 * Assignment - 14
 * Question - 2
 * @topic - Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.
 */
 
 #include<stdio.h>
 int main()
 {
 	int a[10], i, sum = 0;
 	printf("Enter 10 Element:\n");
 	for(i = 0; i < 10; i++)
 	{
 		scanf("%d", &a[i]);
	 }
	 for(i = 0; i < 10; i++)
	 {
	 	sum = sum + a[i];
	 }
	 printf("Average of number = %.2f", sum / 10.0);
 	return 0;
 }
