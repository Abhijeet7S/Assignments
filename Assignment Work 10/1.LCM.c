/*
 * Assignment - 11
 * Question - 1
 * @topic - Functions
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
 	for(i = 1; i <= (x * y); i++)
 	{
 		if((x % i == 0) && (y % i == 0))
 		return i;
 		break;
	 }
 }
