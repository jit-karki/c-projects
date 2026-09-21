#include <stdio.h>
int main() {
    unsigned int a = 5;
    unsigned int b = 9;

    printf("a & b (Bitwise AND) = %d\n",a & b);
    printf("a & b (Bitwise OR) = %d\n", a | b);
    printf("a & b (Bitwise XOR) = %d\n", a ^ b);
    printf("a & b (Bitwise NOT) = %d\n", ~a);
    printf("a & b (Bitwise LEFT SHIFT) = %d\n", a << 1);
    printf("a & b (Bitwise RIGHT SHIFT) = %d\n", a >> 1);

    return 0;
}