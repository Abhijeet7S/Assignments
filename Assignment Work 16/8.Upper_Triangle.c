/*
 * Assignment - 16	
 * Question - 8
 * @topic - Multi Dimensional Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program in C to print or display an upper triangular matrix.
 */
 
  #include<stdio.h>
 int main()
 {
 	int a[3][3], i, j;
 	printf("Enter 3 X 3 matrix:\n");
 	for(i = 0; i < 3; i++)
 	{
 		for(j = 0; j < 3; j++)
 		{
 			scanf("%d", &a[i][j]);
		 }
	 }
	 printf("Your Matrix is :\n");
 	for(i = 0; i < 3; i++)
 	{
 		for(j = 0; j < 3; j++)
 		{
 			printf("%d ", a[i][j]);
		 }
		 printf("\n");
	 }
	 printf("Upper triangle of the matrix is :\n");
  	for(i = 0; i < 3; i++)
 	{
 		for(j = 0; j < 3; j++)
 		{
 			if(i <= j)
 			printf("%d ", a[i][j]);
 			else
 			printf("0 ");
		 }
		 printf("\n");
	 }
 	return 0;
 }
