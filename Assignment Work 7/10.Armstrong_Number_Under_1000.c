/*
 * Assignment - 7
 * Question - 10
 * @topic - Level up with loops
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to print all Armstrong numbers under 1000
 
 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	int i, n, n1;
 	for(i = 1; i <=1000; i++)
 	{
 		int count = 0;
		 int sum = 0;
 			n =i;
 	while(n != 0)
 	{
 		n = n / 10;
 		count++;
	 }
	 n1 = i;
	 while(n1 != 0)
	 {
	 	
	 	sum = sum + pow(n1 % 10, count);
	 	n1 = n1 / 10;
	 }
	 if(sum == i)
	 printf("%d ",i);
	 
	 }
	 return 0;
 
 }
 
