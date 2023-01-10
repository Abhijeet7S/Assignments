/*
 * Assignment - 11
 * Question - 8
 * @topic - More on Functions
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a function to print PASCAL Triangle. (TSRN)
 
 #include<stdio.h>
 int fact(int);
 int comb(int, int);
 void printPascal(int);
 int fact(int x)
 {
 	int f = 1;
 	while(x >=1)
 	{
 		f = f * x;
 		x--;
	 }
	 return (f);
 }
 
 int comb(int n, int r)
 {
 	return fact(n)/(fact(r) * fact(n-r));
 }
 void printPascal(int line)
 {
 	int i, j, k, r;
 	for(i = 0; i < line; i++)
 	{
 		k = 1;
 		r = 0;
 		for(j = 0; j < (line * 2 - 1); j++)
 		{
 			if((j >= line-1-i) && (j <= line-1 +i) && k)
 			{
 				printf("%d", comb(i, r));
 				
 				k = 0;
 				r++;
			 }
			 else
			 {
			 	printf(" ");
			 	k = 1;
			 }
		 }
		  printf("\n");
	 }
 }
 int main()
 {
 	int num_line;
 	printf("Enter Number:\n");
 	scanf("%d", &num_line);
 	printPascal(num_line);
 	return 0;
 }
 
