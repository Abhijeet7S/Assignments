/*
 * Assignment - 15	
 * Question - 2
 * @topic - Arrays and Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function to find the smallest number from the given array of any size. (TSRS)
 */
 
 #include<stdio.h>
 int findMin(int a[], int size)
 {
 	int i, min = a[0];
 	for(i = 1; i < size; i++)
 	{
 		if(min > a[i])
 		min = a[i];
	 }
	 return min;
 }
 int main()
 {
 	int a[7] = {4, 5,78, 8, 4, 7, 2};
 	printf("%d", findMin(a, 7));
 	return 0;
 }
