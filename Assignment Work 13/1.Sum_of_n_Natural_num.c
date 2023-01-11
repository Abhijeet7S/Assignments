/*
 * Assignment - 13
 * Question - 1
 * @topic - More on Recursion
 * @author - Abhijeet Kumar singh
 */
 
 // Write a recursive function to calculate sum of first N natural numbers
 
 #include<stdio.h>
 int sum(int);
 int main()
 {
 	int n;
 	printf("Enter number:\n");
 	scanf("%d", &n);
 	//sum(n);
 	printf("%d", sum(n));
 	return 0;
 }
 
 int sum(int x)
 {
    if(x == 0)
    return;
    else    
    	return x + sum(x - 1);
 }
 

 

