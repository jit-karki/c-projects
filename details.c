#include <stdio.h>
int main(){
    char n[50],g;
    int a,c;
    printf("enter your name: ");
    scanf("%[^\n]s",n);

    printf("enter your age: ");
    scanf("%d",&a);

    printf("enter your gender: ");
    scanf(" %c",&g);
    
    printf("enter your cgpa: ");
    scanf("%d",&c);

    printf("your name is: %s\n",n);
    printf("your age is: %d\n",a);  
    printf("your gender is: %c\n",g);
    printf("your cgpa is: %d\n",c);
    return 0;

}