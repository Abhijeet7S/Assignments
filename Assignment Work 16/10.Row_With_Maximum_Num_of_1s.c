/*
 * Assignment - 16	
 * Question - 10
 * @topic - Multi Dimensional Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program in C to find the row with maximum number of 1s.
 */
 
 #include<stdio.h>
 int main()
 {
 	int a[3][3], b[3];
 	int i, j, count;
 	int maxOneCount = 0;
 	int maxRowIndex;
 	printf("Enter 3 X 3 matrix:\n");
 	for(i = 0; i < 3; i++)
 	{
 		for(j = 0; j < 3; j++)
 		{
 			scanf("%d" ,&a[i][j]);
		 }
	 }
	 
 	printf("The Matrix :\n");
 	for(i = 0; i < 3; i++)
 	{
 		for(j = 0; j < 3; j++)
 		{
 			printf("%d " ,a[i][j]);
		 }
		 printf("\n");
	 }
	 

 	for(i = 0; i < 3; i++)
 	{
 		count = 0;
 		for(j = 0; j < 3; j++)
 		{
 			if(a[i][j] == 1)
 			{
 				count++;
			 }
		 }
		 if(maxOneCount < count)
		 {
		 	 maxOneCount = count;
		 	 maxRowIndex = i;
		 	
		 }
		
	 }
	 printf("Row with maximum number of One = %d", maxRowIndex);
 	return 0;
 	
 }
