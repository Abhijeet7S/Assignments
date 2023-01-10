/*11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
and convert it into USD.
*/

#include<stdio.h>
int main()
{
    float price, usd;
    printf("Enter Your Money\n");
    scanf("%f", &price);
    usd = price / 76.23;
    printf("Amt = %.2f Rs. & USD = %.2f", price, usd);
    return 0;
}
