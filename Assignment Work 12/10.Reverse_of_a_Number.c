/*
 * Assignment - 12
 * Question - 10
 * @topic - Recursion
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a recursive function to print reverse of a given number
 
 #include<stdio.h>
 void reverse(int x)
 {
 	if(x == 0)
 	return;
 	printf("%d", (x % 10));
 	reverse(x / 10);
 }
 int main()
 {
 	int n;
 	printf("Enter Number:\n");
 	scanf("%d", &n);
 	reverse(n);
 	return 0;
 }
