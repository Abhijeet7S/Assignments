/*
 * Assignment - 15	
 * Question - 1
 * @topic - Arrays and Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function to find the greatest number from the given array of any size. (TSRS)
 */
 
 #include<stdio.h>
 int findMax(int a[], int size)
 {
 	int i, max = a[0];
 	for(i = 1; i < size; i++)
 	{
 		if(max < a[i])
 		max = a[i];
	 }
	 return max;
 }
 int main()
 {
 	int a[7] = {4, 7, 9, 2,8, 9,17};
 	printf("%d ", findMax(a, 7));
 	return 0;
 }
