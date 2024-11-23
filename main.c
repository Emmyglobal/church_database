#include "main.h"

memb members[MAX_NUM];
int count = 0;

int main() {
    int choice;

    loadFromFile();

    while (1) {
        printf("\nWelcome to Magboro Parish Database\n");
        printf("\nSelect your option\n\n");
        printf("1. Add Parishioner\n");
        printf("2. Display Parishioner\n");
        printf("3. Exit\n");
        printf("Enter your choice to proceed: ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                addMember();
                break;
            case 2:
                displayMember();
                break;
            case 3:
                saveToFile();
                printf("Thanks, the program will exit now. Goodbye! :)\n");
                return 0;
            default:
                printf("Invalid choice. Please select again.\n");
                break;
        }
    }
}