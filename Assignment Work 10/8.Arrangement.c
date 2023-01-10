/*
 * Assignment - 10
 * Question - 8
 * @topic - Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)
 */
 
 #include<stdio.h>
 int fact(int n)
 {
 	int i, f = 1;
 	for(i =1; i <= n; i++)
 	f = f*i;
 	return f;
 }
 int arrangement(int n, int r)
 {
 	return fact(n) / (fact(n - r));
 }
 int main()
 {
 	int n,r;
 	printf("Enter N and r:\n");
 	scanf("%d %d", &n, &r);
 	printf("Arrangement = %d", arrangement(n, r));
 	return 0;
 }
