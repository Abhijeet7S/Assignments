/*
 * Assignment - 7
 * Question - 8
 * @topic - Level up with loops
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to find next Prime number of a given number
 
 #include<stdio.h>
 int main()
 {
 	int n, i, j;
 	printf("Enter any number\n");
 	scanf("%d", &n);
 	for(i = n+1;  ;i++)
 	{
 		for(j = 2; j < i; j++)
 		{
 			if(i % j == 0)
 			{
 				break;
			 }
		 }
		 if(i == j)
		 {
		 	break;
		 }
		
	 }
	  printf("The Next Prime Number Of %d is %d", n, i);
 	
 	return 0;
 }
