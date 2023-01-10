/*
 * Assignment - 5
 * Question - 7
 * @topic - Iterative Control Statements
 * @author - Abhijeet Kumar singh
 */
 
 // Write a program to print the first N even natural numbers in reverse order
 
 #include<stdio.h>
 int main()
 {
 	int i, n;
 	printf("Enter a Number\n");
 	scanf("%d", &n);
 	for(i = (2 * n); i >=1; i--)
 	{
 		if((i % 2) == 0)
 		{
 			printf("%d\t", i);
		 }
	 }
 	return 0;
 }
