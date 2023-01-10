/*
 * Assignment - 7
 * Question - 4
 * @topic - Level up with loops
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to calculate HCF of two numbers
 
 #include<stdio.h>
 int main()
 {
 	int a, b, i, lcm;
 	printf("Enter two Number\n");
 	scanf("%d %d", &a, &b);
 	for(i = 1; i <= (a *b); i++)
 	{
 		if((i % a == 0) && (i % b ==0))
 		{
 			lcm = i;
 			break;
		 }
	 }
	 //printf("LCM = %d\n", lcm);
	 printf("HCF of %d and %d = %d", a, b, (a * b / lcm));
 	return 0;
 }
