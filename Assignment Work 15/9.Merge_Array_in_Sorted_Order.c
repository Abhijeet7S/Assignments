/*
 * Assignment - 15	
 * Question - 9
 * @topic - Arrays and Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function in C to merge two arrays of the same size sorted in descending
order
 */
 
 #include<stdio.h>
 void mergeSort(int a[], int m, int b[], int n)
 {
 	int c[m + n];
 	int i, j, k = 0;
 	for(i = 0, j = 0; i < m && j < n; k++)
 	{
 		if(a[i] < b[j])
 		{
 			c[k] = a[i];
 			i++;
		 }
		 else
		 {
		 	c[k] = b[j];
		 	j++;
		 }
	 }
	 
	 if(i == m && j != n)
	 {
	 	for( ; j < n; j++)
	 	{
	 		c[k] = b[j];
	 		k++;
		 }
	 }
	 if(i != m && j == n)
	 {
	 	for( ; i < m; i++)
	 	{
	 		c[k++] = a[i];
		 }
	 }
	 
	 for(i = m + n -1; i >= 0; i--)
	 {
	 	printf("%d ", c[i]);
	 }
 }
 
 int main()
 {
 	int a[] = {2, 4, 6, 9, 10};
 	int b[] = {3, 5, 8, 10, 11};
 	mergeSort(a, 5, b, 5);
 	return 0;
 }
