/*
 * Assignment - 11
 * Question - 1
 * @topic - More on Functions
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a function to calculate LCM of two numbers. (TSRS)
 
 #include<stdio.h>
 int lcm(int, int);
 int main()
 {
 	int a, b;
 	printf("Enter Two Number\n");
 	scanf("%d %d", &a, &b);
 	int ans = lcm(a, b);
 	printf("LCM = %d", ans);
 	return 0;
 }
 int lcm(int x, int y)
 {
 	int i;
 	for(i = 2; i <= (x * y); i++)
 	{
 		if((i % x == 0) && (i % y == 0))
 		{
 			return i;
 			 break;
		 }
		
	 }
 }
