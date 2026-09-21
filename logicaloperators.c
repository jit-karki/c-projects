#include <stdio.h>
int main() {
    int x=5, y=10;
    if ((x<y) && (y>0)){
        printf("both conditions are true (AND)\n");
    }
    if ((x>y) || (y>0)){
        printf("Atleast one conditon is true (OR)\n");
    }
    if (!(x==y)){
        printf("Condition is inverted (NOT)\n");
    }
    return 0;
}