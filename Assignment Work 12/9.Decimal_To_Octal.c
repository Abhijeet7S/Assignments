/*
 * Assignment - 12
 * Question - 9
 * @topic - Recursion
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a recursive function to print octal of a given decimal number
 
 #include<stdio.h>
 
 void octal(int x)
 {
 	if(x == 0)
 	return;
 	octal(x / 8);
 	printf("%d", x % 8);

 }
 int main()
 {
 	int n;
 	printf("Enter any Number:\n");
 	scanf("%d", &n);
 	octal(n);
 	return 0;
 }
