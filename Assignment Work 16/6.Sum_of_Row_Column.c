/*
 * Assignment - 16	
 * Question - 6
 * @topic - Multi Dimensional Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program in C to find the sum of rows and columns of a Matrix.
 */
 
 int main()
 {
 	int a[3][3], b[3][3], i,j;
 	for(i = 0; i < 3; i++)
 	{
 		for(j = 0; j < 3; j++)
 		{
 			b[i][j] = i + j;
		 }
	 }
	 printf("Sum of Row and Column are:\n");
	 for(i = 0; i < 3; i++)
	 {
	 	for(j = 0; j < 3; j++)
	 	{
	 		printf("%d ", b[i][j]);
		 }
		 printf("\n");
	 }
 	return 0;
 }
