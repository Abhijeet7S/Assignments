/*
 * Assignment - 7
 * Question - 1
 * @topic - Level up with loops
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to find the Nth term of the Fibonnaci series.
 
 #include<stdio.h>
 int main()
 {
 	int num, a = 0, b = 1, count = 2, c = 0;
	printf("Enter Nth Term\n ");
	scanf("%d", &num);
	while(count < num)
	{
		c = a + b;
		count++;
		a = b;
		b = c;
	 } 
	 printf("%dth tern of the Fibonnaci Series is %d", num, b);
 	return 0;
 }
