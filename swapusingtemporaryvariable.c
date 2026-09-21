#include <stdio.h>
int main(){
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("After temp swap: a = %d, b = %d\n", a, b);
    return 0;
}