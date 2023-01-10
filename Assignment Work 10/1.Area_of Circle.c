/*
 * Assignment - 10
 * Question - 1
 * @topic - Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a function to calculate the area of a circle. (TSRS)
 */
 
 #include<stdio.h>
 float area( float r);
 int main()
 {
 	float radius, a; 
 	printf("Enter Radius Of Circle\n");
 	scanf("%f", &radius);
 	a = area(radius);
 	printf("Area of Circle = %.2f", a);
 	return 0;
 }
 
 float area(float x)
 {
 	return 3.14 * x *x;
 }
