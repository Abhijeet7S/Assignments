/*
 * Assignment - 10
 * Question - 7
 * @topic - Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)
 */
 
 #include<stdio.h>
 int fact(int);
 int combination(int n, int r);
 int main()
 {
 	int n, r;
 	printf("Enter Value of N and R :\n");
 	scanf("%d%d", &n, &r);
 	printf("Combination = %d", combination(n, r));
 	return 0;
 }
 int fact(int x)
 {
 	int i, f = 1;
 	for(i =1; i <= x; i++)
 	{
 		f=f * i;
	 }
	 return f;
 }
  int combination(int n, int r)
  {
  	return fact(n)/(fact(r) * (fact(n - r)));
  }
