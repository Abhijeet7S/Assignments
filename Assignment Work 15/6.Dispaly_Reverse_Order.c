/*
 * Assignment - 15	
 * Question - 6
 * @topic - Arrays and Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function in C to read n number of values in an array and display it in reverse
order
 */
 
 #include<stdio.h>
 void reverseArray(int a[], int);
 int main()
 {
 	int n, a[n], i;
 	printf("Enter the size of array:\n");
 	scanf("%d", &n);
 	printf("Enter %d Element :\n", n);
 	for(i = 0; i < n; i++)
 	scanf("%d", &a[i]);
 	reverseArray(a, n);
 	return 0;
 }
 
 void reverseArray(int a[], int size)
 {
 	int i;
 	for(i = size -1; i >= 0; i--)
 	printf("%d ", a[i]);
 }
 
 
