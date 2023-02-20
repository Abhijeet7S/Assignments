/*
 * Assignment - 15	
 * Question - 5
 * @topic - Arrays and Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.
 */
 
 #include<stdio.h>
 int getAdjacentDuplicate(int a[], int size)
 {
 	int i, j;
 	for(i = 0; i < size - 1; i++)
 	{
 		for(j = i+1; j < size; j++)
 		{
 			if(a[i] != a[j])
 		    break;
 			else
 			return a[i];
 			
		 }
	 }
//	 printf("No any occurrence of adjacent duplicate value\n");
//	 return;
 }
 
 int main()
 {
 	int a[5] = {2, 6, 6 ,9, 6};
 //	getAdjacentDuplicate(a, 5);
	printf("%d", getAdjacentDuplicate(a, 5)); 
 	return 0;
 }
