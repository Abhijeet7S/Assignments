/*
 * Assignment - 16	
 * Question - 2
 * @topic - Multi Dimensional Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program to calculate the product of two matrices each of order 3x3.
 */
 
 int main()
 {
 	int a[3][3], b[3][3], c[3][3];
 	int i, j, k;
 	printf("Enter the element of first matrix:\n");
 	for(i = 0; i < 3; i++)
 	{
 		for(j = 0; j < 3; j++)
 		{
 			scanf("%d", &a[i][j]);
		 }
	 }
	printf("Enter the element of Second matrix:\n");
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
	 		int sum = 0;
	 		for(k = 0; k < 3; k++)
	 		{
	 			sum = sum + a[i][k] * b[k][j];
			 }
			 c[i][j] = sum;
		 }
	 }
	 
	 printf("Product of Both matrices:\n");
	 for(i = 0; i < 3; i++)
	 {
	 	for(j = 0; j < 3; j++)
	 	{
	 		printf("%d ", c[i][j]);
		 }
		 printf("\n");
	 }
	 
	 return 0;
 }
