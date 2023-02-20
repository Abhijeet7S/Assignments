/*
 * Assignment - 15	
 * Question - 7
 * @topic - Arrays and Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function in C to count a total number of duplicate elements in an array.(Means
elements that occurs 2 times in an array)
 */
 
 #include<Stdio.h>
 int countDuplicate(int a[], int size)
 {
 	int i, j, count = 0;
 	for(i = 0; i < size - 1; i++)
 	{
 		for(j = i + 1; j < size; j++)
 		{
 			if(a[i] == a[j])
 			count++;
		 }
	 }
	// printf("%d", count);
	return count;
 }
 
 int main()
 {
 	int n, a[n], i;
 	printf("Enter size of array:\n");
 	scanf("%d", &n);
 	printf("Enter %d Element :\n", n);
 	for(i = 0; i < n; i++)
 	scanf("%d", &a[i]);
 	int x = countDuplicate(a, n);
 	printf("Total number of Duplicate element = %d", x);
 	return 0;
 }
