#include <stdio.h>

int main() {
    int s1,s2,s3,s4,s5,avg;
    printf("Enter marks of first subjects: ");
    scanf("%d ", &s1);
    printf("Enter marks of second subjects: ");
    scanf("%d ", &s2);
    printf("Enter marks of third subjects: ");
    scanf("%d ", &s3);
    printf("Enter marks of fourth subjects: ");
    scanf("%d ", &s4);
    printf("Enter marks of fifth subjects: ");
    scanf("%d ", &s5);
    avg = (s1 + s2 + s3 + s4 + s5) / 5;

    if(s1>=35 && s2>=35 && s3>=35 && s4>=35 && s5>=35) {
        if(avg>=80) {
            printf("Result: Distinction\n");
        } else if(avg>=60 && avg<80) {
            printf("Result: First Class\n");
        } else if(avg>=50 && avg<60) {
            printf("Result: Second Class\n");
        } else if(avg>=35 && avg<50) {
            printf("Result: Third Class\n");
        }
    } else {
        printf("Result: Fail\n");
    }
    return 0;       
}