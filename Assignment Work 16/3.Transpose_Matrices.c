/*
 * Assignment - 16	
 * Question - 3
 * @topic - Multi Dimensional Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program in C to find the transpose of a given matrix.
 */
 
 #include<stdio.h>
 int main()
 {
 	int a[3][2], b[2][3];
 	int i, j;
 	printf("Enter 3 X 2 matrix;\n");
 	for(i = 0; i < 3; i++)
 	{
 		for(j = 0; j < 2; j++)
 		{
 			scanf("%d", &a[i][j]);
		 }
	 }
	 printf("Your matrix is :\n");
	for(i = 0; i < 3; i++)
 	{
 		for(j = 0; j < 2; j++)
 		{
 		printf("%d ", a[i][j]);
		 }
		 printf("\n");
	 }
	 
  	for(i = 0; i < 2; i++)
 	{
 		for(j = 0; j < 3; j++)
 		{
 			b[i][j] = a[j][i];
		 }
	 }
	 printf("\n\n\n");
	 
	 printf("Transpose of matrix:\n");
  	for(i = 0; i < 2; i++)
 	{
 		for(j = 0; j < 3; j++)
 		{
 			printf("%d ",b[i][j]);
		 }
		 printf("\n");
	 }
	return 0; 
 }
