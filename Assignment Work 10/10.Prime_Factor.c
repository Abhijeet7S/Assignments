/*
 * Assignment - 10
 * Question - 10
 * @topic - Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)
 */
 
 #include<stdio.h>
 int factor(int);
 int isPrime(int);
 void primeFactor(int);
 int main()
 {
 	int num;
 	printf("Enter number:\n");
 	scanf("%d", &num);
 	primeFactor(num);
 	return 0;
 }
 void primeFactor(int number)
 {
 	int i, x;
 	for(i = 2; i <= number; i++)
 	{
 		while(number % i ==0)
 		{
 			printf("%d\t", i);
 			number = number / i;
		 }
 		
	 }
 }


 
