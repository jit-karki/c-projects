#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ComputerInput();
int UserInput();
void CheckWinner(int computerChoice, int userChoice);

int main() {

    srand(time(NULL));
    printf("*** ROCK PAPER SCISSOR ***\n");

    int computerChoice = ComputerInput();
    int userChoice = UserInput();

    switch (userChoice){
        case 1:
            printf("You chose Rock\n");
            break;
        case 2:
            printf("You chose Paper\n");
            break;
        case 3:
            printf("You chose Scissors\n");
            break;
    }
    switch (computerChoice){
        case 1:
            printf("Computer chose Rock\n");
            break;
        case 2:
            printf("Computer chose Paper\n");
            break;
        case 3:
            printf("Computer chose Scissors\n");
            break;
    }
    CheckWinner(computerChoice, userChoice);
    return 0;
}
int ComputerInput(){
    return (rand() % 3) + 1;
}
int UserInput(){
    int choice;
    do {
        printf("Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);
    return choice;
}
void CheckWinner(int computerChoice, int userChoice){
    if(userChoice == computerChoice){
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
    
}