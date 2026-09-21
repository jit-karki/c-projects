#include <stdio.h>
int main() {
    int a = 10, b = 25, c = 15;
    if (a>=b && a>=c){
        printf("%d is the largest.\n",a);   
    }
    else if(b >- a && b >=c){
        printf("%d is the largest.\n",b);
    }
    else printf("%d is the largest.\n",c);
    return 0;
}