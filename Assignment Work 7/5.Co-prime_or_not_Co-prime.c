/*
 * Assignment - 7
 * Question - 5
 * @topic - Level up with loops
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to check whether two given numbers are co-prime numbers or not
 
 #include<stdio.h>
 int main()
 {
 	int a, b, i, lcm, hcf;
 	printf("Enter Two Number\n");
 	scanf("%d %d", &a, &b);
 	for(i = 1; i <= (a * b); i++)
 	{
 		if((i % a == 0) && (i % b == 0))
 		{
 			lcm = i;
 			break;
		 }
	 }
	 hcf = (a * b) / lcm;
	 if(hcf == 1)
	 printf("%d and %d are co-prime", a, b);
	 else
	 printf("%d and %d are not co-prime", a, b);
	 
 	return 0;
 }
 
 
 
