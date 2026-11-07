#include <stdio.h>
#include <stdbool.h>

bool is_even(int number) {
    return number % 2 == 0;
}

int main() {
    int num;
    bool result;
    printf("Enter an integer: ");
    scanf("%d", &num);

    result = is_even(num);
    printf("%d", result);
    return 0;
}