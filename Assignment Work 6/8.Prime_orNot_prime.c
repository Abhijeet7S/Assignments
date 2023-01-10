/*
 * Assignment - 6
 * Question - 8
 * @topic - Use any loop
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to check whether a given number is a Prime number or not
 
 #include<stdio.h>
 int main()
 {
 	int n, i, flag = 0;
 	printf("Enter Number\n");
 	scanf("%d", &n);
 	for(i = 2; i <= (n / 2); i++)
 	{
 		if(	(n % i) == 0)
 		flag = 1;
 		break;
	 }
	 if(flag == 1)
	 printf("Not Prime");
	 else
	 printf("Prime");
 	return 0;
 }
