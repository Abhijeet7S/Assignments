/*
 * Assignment - 3
 * Question - 11
 * @topic - Decision Control Statement
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.
*/

#include<stdio.h>
int main()
{
	float subject_1, subject_2, subject_3, subject_4, subject_5;
	printf("Enter Your marks of Five subject\n");
	scanf("%f %f %f %f %f", &subject_1, &subject_2, &subject_3, &subject_4, &subject_5);
	float total_marks = subject_1 + subject_2 + subject_3 + subject_4 + subject_5;
	if((total_marks * 100) / 500  < 33)
	printf("Failed");
	else
	printf("Passed");
	return 0;
}
