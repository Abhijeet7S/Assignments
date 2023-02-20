/*
 * Assignment - 15	
 * Question - 4
 * @topic - Arrays and Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
 */
 
 #include<stdio.h>
 void rotateArray(int a[], int size, int n) // n --> position
 {
 	int i, j;
 	for(i = 1; i <= n; i++)
 	{
 		int x = a[0];
 		for(j = 0; j < size; j++)
 		{
 			a[j] = a[j+1];
		 }
		 a[size - 1] = x;
	 }
	 for(i = 0; i < size; i++)
	 {
	 	printf("%d ", a[i]);
	 }
 }
 int main()
 {
 	
 	int a[5] = {32, 29, 40, 12, 70};
	rotateArray(a, 5, 2);  
 	return 0;
 }
