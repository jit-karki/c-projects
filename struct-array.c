#include <stdio.h>

typedef struct {
    char model[50];
    int year;
    float price;
}Car;

int main() {
    Car car[] = {
        {"Toyota Camry", 2020, 24000.00},
        {"Honda Accord", 2019, 22000.00},
        {"Ford Mustang", 2021, 35000.00}
    };
    int no = sizeof(car) / sizeof(car[0]);
    for (int i = 0; i < no; i++) {
        printf("Model: %s, Year: %d, Price: $%.2f\n", car[i].model, car[i].year, car[i].price);
    }
    return 0;
}