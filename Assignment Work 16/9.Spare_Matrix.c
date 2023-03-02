/*
 * Assignment - 16	
 * Question - 9
 * @topic - Multi Dimensional Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program in C to accept a matrix and determine whether it is a sparse matrix.
 */
 
 int main()
 {
 	int a[3][3], i, j, count = 0;
    printf("Enter 3 X 3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
    	for(j = 0; j < 3; j++)
    	{
    		scanf("%d", &a[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(a[i][j] == 0)
			count++;
			
		}
	}
	if(count >= 4)
	printf("Given Matrix is Sparse Matrix.\n");
	else
	printf("It's not a Sparse Matrix. It is Dense Matrix\n");
 	return 0;
 }
