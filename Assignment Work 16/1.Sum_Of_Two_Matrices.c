/*
 * Assignment - 16	
 * Question - 1
 * @topic - Multi Dimensional Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program to calculate the sum of two matrices each of order 3x3.
 */
 
 #include<stdio.h>
 int main()
 {
 	int a[3][3], b[3][3], sum[3][3], i, j;
 	printf("Enter the 9 element of First matrix:\n");
 	for(i = 0; i < 3; i++)
 	{
 		for(j = 0; j < 3; j++)
 		{
 			scanf("%d", &a[i][j]);
		 }
	 }
	 printf("Enter the 9 element of First matrix:\n");
	 for(i = 0; i < 3; i++)
   	{
 		for(j = 0; j < 3; j++)
 		{
 			scanf("%d", &b[i][j]);
		 }
	 }
	 for(i = 0; i < 3; i++)
	 {
	 	for(j = 0; j < 3; j++)
	 	{
	 		sum[i][j] = a[i][j] + b[i][j];
		 }
	 }
	 printf("Sum of both matrices :\n");
	 for(i = 0; i < 3; i++)
	 {
	 	for(j = 0; j < 3; j++)
	 	{
	 		printf("%d  ", sum[i][j]);
		 }
		 printf("\n");
	 }
 	return 0;
 }
