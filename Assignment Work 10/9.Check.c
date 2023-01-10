/*
 * Assignment - 10
 * Question - 9
 * @topic - Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function to check whether a given number contains a given digit or not.
(TSRS)
 */
 
 #include<stdio.h>
 int check(int digit, int number)
 {
 	while(number)
 	{
 		if(number % 10 == digit)
 		return 1;
 		number = number / 10;
	 }
	 return 0;
 }
 int main()
 {
 	int d, n;
 	printf("Enter a Digit and Number:\n");
 	scanf("%d %d", &d, &n);
 	if(check(d, n) == 1)
 	printf("Yes");
 	else
 	printf("No");
 	return 0;
 }
