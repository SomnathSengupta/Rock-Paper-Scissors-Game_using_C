/*
1 -> Rock
2 -> paper 
3 -> Scissors
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int system, person, choise;
    printf("Welcome to Rock Paper Scissors Game!!!\n");
    while (1) {
    srand(time(NULL));
    system = (rand() % 3) + 1;
    printf("\n1. Rock\n2. Paper\n3. Scissors");
    printf("\nEnter your choise: ");
    scanf("%d", &person);
    switch (person) {
        case 1: // Person -> Rock
            if (system == 1) {
                /*
                Person -> Rock
                System -> Rock
                */
                printf("Computer: Rock\nPerson: Rock\n");
                printf("Draw!!!\n");
            }
            if (system == 2) {
                 /*
                Person -> Rock
                System -> Paper
                */
                printf("Computer: Paper\nPerson: Rock\n");
                printf("You have lost...\n");
            }
            if (system == 3) {
                 /*
                Person -> Rock
                System -> Scissors
                */
                printf("Computer: Scissors\nPerson: Rock\n");
                printf("You Won!!!\n");
            }
            break;
        case 2: // Person -> Paper
            if (system == 1) {
                 /*
                Person -> Paper
                System -> Rock
                */
                printf("Computer: Rock\nPerson: Paper\n");
                printf("You Won!!!\n");
            }
            if (system == 2) {
                 /*
                Person -> Paper
                System -> Paper
                */
                printf("Computer: Paper\nPerson: Paper\n");
                printf("Draw!!!\n");
            }
            if (system == 3) {
                 /*
                Person -> Paper
                System -> Scissors
                */
                printf("Computer: Scissors\nPerson: Paper\n");
                printf("You have lost...\n");
            }
            break;
        case 3: // Person -> Scissors
            if (system == 1) {
                /*
                Person -> Scissors
                System -> Rock
                */
                printf("Computer: Rock\nPerson: Scissors\n");
                printf("You have lost...\n");
            }
            if (system == 2) {
                 /*
                Person -> Scissors
                System -> Paper
                */
                printf("Computer: Paper\nPerson: Scissors\n");
                printf("You Won!!!\n");
            }
            if (system == 3) {
                 /*
                Person -> Scissors
                System -> Scissors
                */
                printf("Computer: Scissors\nPerson: Scissors\n");
                printf("Draw!!!\n");
            }
            break;
        default:
            printf("Entered an invalid choise...\n");
            break;
      }
      printf("Enter 1 to exit and enter 2 to play again: ");
      scanf("%d", &choise);
      if (choise == 1) {
        printf("\nThans For Playing.");
        exit(0);
      }
    }
   return 0; 
}
    