#include <stdio.h>
int main() {
    // Shoping Cart

    char item[50] ="";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("enter the item u want: ");
    fgets(item, sizeof(item), stdin);

    printf("enter the price of the item: ");
    scanf("%f", &price);

    printf("enter the quantity of the item: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("your total is: %c%.2f\n", currency, total);
    return 0;
}