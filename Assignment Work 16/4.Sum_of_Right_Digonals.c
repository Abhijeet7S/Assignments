/*
 * Assignment - 16	
 * Question - 4
 * @topic - Multi Dimensional Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program in C to find the sum of right diagonals of a matrix.
 */
 
 int main()
 {
 	int a[3][3], i, j, ctr = 2, sum = 0;
	printf("Enter 3 X 3 matrix:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	 }
 	printf("The Matrix is :\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
		printf("%d ", a[i][j]);
		}
		printf("\n");
	 }
	 
	 for(i = 0; i < 3; i++)
	 {
	 	sum = sum + a[i][ctr];
	 	ctr--;
	 }
	 printf("Sum of right digonal of matrix = %d", sum);
	  
 }
