/*Meet Alex, a budget-savvy shopper who wants to give discounts to customers in the following ways:

If the amount is greater than 5000 (not inclusive), the discount is 20%.
If it is greater than 2000 (not inclusive), the discount is 15%.
10% discount for a purchase amount greater than 1000 (not inclusive). 


Write a program that takes the amount as input and calculates the discounts using a function named applyDiscount. The discount rates are set as 10%, 15%, and 20% as global double datatype variables.

Input format :
The input consists of a double value representing the amount.

Output format :
The output displays "Discounted amount: " followed by a double value representing the discounted amount, rounded to two decimal places.*/

#include <stdio.h>

double discount10 = 0.10;
double discount15 = 0.15;
double discount20 = 0.20;

double applyDiscount(double amount) {
    if (amount > 5000) {
        return amount - (amount * discount20);
    } else if (amount > 2000) {
        return amount - (amount * discount15);
    } else if (amount > 1000) {
        return amount - (amount * discount10);
    } else {
        return amount;
    }
}

int main() {
    double purchase;
    scanf("%lf", &purchase);

    double discountedAmount = applyDiscount(purchase);
    printf("Discounted amount: %.2lf\n", discountedAmount);

    return 0;
}

