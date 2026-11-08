#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char questions[][100]={"What is the largest planet in our solar system?",
                           "What is the hottest planet in our solar system?",
                           "What is the smallest planet in our solar system?",
                           "What is the closest planet to the sun?"};
    char answers[][100]={"A.Jupiter\nB.Saturn\nC.Earth\nD.Mars",
                         "A.Mercury\nB.Venus\nC.Mars\nD.Jupiter",
                         "A.Neptune\nB.Venus\nC.Earth\nD.Mercury",
                         "A.Mercury\nB.Venus\nC.Earth\nD.Mars"};
    char ans[]={'A','B','D','A'};
    int question_count = sizeof(questions) / sizeof(questions[0]);
    char guess='\0';
    int score=0;

    printf("********Welcome to the Quiz Game!********\n");
    for(int i=0; i<question_count; i++) {
        printf("\n%s\n",questions[i]);
        printf("\n%s\n",answers[i]);
        printf("Enter your answer (A, B, C, D): ");
        scanf(" %c", &guess);
        guess = toupper(guess);
        if(guess == ans[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer is %c.\n", ans[i]);
        }
    }
    printf("\nYour final score is %d out of %d.\n", score, question_count);

    return 0;
}