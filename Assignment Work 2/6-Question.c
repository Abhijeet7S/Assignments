/* 6. Write a program which takes a character as an input and displays its ASCII code.*/

#include<stdio.h>
int main()
{
   // int code;
    char c;
    printf("Enter a character\n");
    scanf("%c", &c);
  //  code = c;
    printf("ASCII code of %c is %d", c, c);
    return 0;

}
