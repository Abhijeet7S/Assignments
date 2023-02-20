/*
 * Assignment - 15	
 * Question - 10
 * @topic - Arrays and Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function in C to count the frequency of each element of an array.
 */
 
 #include<stdio.h>
 void findFrequency(int a[], int n)
 {
 	int hash[100] = {0}, i;
 	for(i = 0; i < n; i++)
 	{
 		hash[a[i]]++;
	 }
	 
	 for(i = 0; i < n ; i++)
	 {
	 	if(hash[i] != 0)
	 	{
	 		printf("%d ---> %d\n", i, hash[i]);
		 }
	 }
 }
 int main()
 {
 	int a[] = {3, 4, 6, 8, 3, 9, 1, 4, 4, 8, 1, 3};
 	findFrequency(a, 11);
 	return 0;
 }
