/*
 * Assignment - 12
 * Question - 8
 * @topic - Recursion
 * @author - Abhijeet Kumar Singh
 */
 
 //Write a recursive function to print binary of a given decimal number
 
 #include<stdio.h>
 void binary(int x)
 {
 	if(x == 0)
 	return;
 	binary(x / 2);
 	printf("%d ", x % 2);
 }
 int main()
 {
 	int n;
	printf("Enter any Number:\n");
	scanf("%d", &n);
 	binary(n);
 }
