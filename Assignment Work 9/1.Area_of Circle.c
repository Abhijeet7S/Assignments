/*
 * Assignment - 9
 * Question - 10
 * @topic - Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a function to calculate the area of a circle. (TSRS)
 */
 
 #include<stdio.h>
 float area( float r);
 int main()
 {
 	float radius; 
 	printf("Enter Radius Of Circle\n");
 	scanf("%f", &radius);
 	area = area(radius);
 	printf("Area of Circle = %f", area);
 	return 0;
 }
 
 float area(float x)
 {
 	return 3.14 * x *x;
 }
