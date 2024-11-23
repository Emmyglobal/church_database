#include "main.h"

/**
 * addMember - Adds a member to the database
 * Return: Nothing
 */
void addMember()
{
    if (count >= MAX_NUM) {
        printf("Maximum limit reached. Cannot add more parishioners.\n");
        return;
    }

    printf("Enter Parishioner's ID: ");
    scanf("%d", &members[count].id);

    // Clear the input buffer after scanf
    while (getchar() != '\n');

    printf("Enter Parishioner's Name: ");
    fgets(members[count].name, sizeof(members[count].name), stdin);
    members[count].name[strcspn(members[count].name, "\n")] = '\0'; 

    printf("Enter Parishioner's Gender: ");
    fgets(members[count].gender, sizeof(members[count].gender), stdin);
    members[count].gender[strcspn(members[count].gender, "\n")] = '\0'; 

    printf("Enter Parishioner's Communicant Status: ");
    fgets(members[count].communicant, sizeof(members[count].communicant), stdin);
    members[count].communicant[strcspn(members[count].communicant, "\n")] = '\0'; /

    printf("Enter Parishioner's Society: ");
    fgets(members[count].society, sizeof(members[count].society), stdin);
    members[count].society[strcspn(members[count].society, "\n")] = '\0'; 

    count++;
    printf("Parishioner added successfully!\n");
}