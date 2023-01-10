/*
 * Assignment - 10
 * Question - 2
 * @topic - Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a function to calculate simple interest. (TSRS)
 */
 
 #include<stdio.h>
 float simple_interest(float ,float, int);
 int main()
 {
 	int time;
 	float princpal, rate, amt;
 	printf("Enter Principal:\n");
 	scanf("%f", &princpal);
 	printf("Enter Rate:\n");
 	scanf("%f", &rate);
 	printf("Enter Time(in year):\n");
 	scanf("%d", &time);
 	amt = simple_interest(princpal, rate, time);
 	printf("Simple Interst = %.2f", amt);
 	return 0;
 }
 float simple_interest(float p, float r, int t)
 {
 	float amt =( p * r * t) / 100;
 	return amt;
 }
