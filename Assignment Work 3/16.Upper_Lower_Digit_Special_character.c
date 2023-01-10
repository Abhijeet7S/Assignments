/*
 * Assignment - 3
 * Question - 16
 * @topic - Decision Control Statement
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.
*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter Character\n");
	scanf("%c", &ch);
	if((ch > 64) && (ch <91))
	printf("Uppercase Alphabet");
	else if((ch > 96) && (ch < 123))
	printf("Lowercase Alphabet\n");
	else if((ch > 47) && (ch < 58))
	printf("Digit CHaracter");
	else
	printf("Special character");
	return 0;
}
