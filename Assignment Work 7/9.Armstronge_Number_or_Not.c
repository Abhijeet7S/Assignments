/*
 * Assignment - 7
 * Question - 9
 * @topic - Level up with loops
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to check whether a given number is an Armstrong number or not
 
 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	int n, count = 0, n1, sum = 0;
 	printf("Enter Any Number\n");
 	scanf("%d", &n);
 	n1 = n;
 	while(n1)
 	{
 		n1 = n1 / 10;
 		count++;
	 }
	 int n2 = n;
	 while(n2)
	 {
	 	sum = sum + pow(n2%10, count);
	 	n2 = n2 /10;
	 }
	 if(n == sum)
	 printf("Yes, Armstrong Number");
	 else
	 printf("Not, Armstrong Number");

 	return 0;
 }
