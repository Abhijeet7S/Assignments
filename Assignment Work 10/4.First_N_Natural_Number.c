/*
 * Assignment - 10
 * Question - 4
 * @topic - Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a function to print first N natural numbers (TSRN)
 */
 
 #include<stdio.h>
 void natural_number(int n)
 {
 	int x = 1;
 	do
 	{
 		printf("%d\t",x);
 		x++;
	 }while(x <= n);
 }
 int main()
 {
 	int n;
 	printf("Enter Number\n");
 	scanf("%d", &n);
 	natural_number(n);
 	return 0;
 }
