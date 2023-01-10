/*
 * Assignment - 11
 * Question - 2
 * @topic - More on Functions
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a function to calculate HCF of two numbers. (TSRS)
 
 #include<stdio.h>
 int hcf(int, int, int);
 int lcm(int, int);
 int main()
 {
 	int a, b;
 	printf("Enter Two Number:\n");
 	scanf("%d%d", &a, &b);
 //	int l =lcm(a, b);
 	//int h = hcf(a, b, l);
 	printf("HCF = %d",hcf(a, b, lcm(a, b)));
 	
 	return 0;
 }
 int lcm(int x, int y)
 {
 	int i = 1;
 	while(i <= (x * y))
 	{
 		if((i % x == 0) && (i % y == 0))
 		{
 			return i;
 			break;
		 }
		 i++;
	 }
 }
 int hcf(int p, int q, int lcm)
 {
 	return (p * q) / lcm;
 }
