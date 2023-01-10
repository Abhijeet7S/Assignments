/*
 * Assignment - 7
 * Question - 11
 * @topic - Level up with loops
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to find the position of first 1 in LSB.
 
 #include<stdio.h>
 int main()
 {
 	int n, count = 1;
 	printf("Enter any number\n");
 	scanf("%d", &n);
 	while(n != 0)
 	{
 		if(n & 1 == 1)
 		{
 			printf("%d", count);
 			break;
		 }
		 else
		 {
		 	n = n >> 1;
		 	count++;
		 }
	 }
 	return 0;
 	
 }
