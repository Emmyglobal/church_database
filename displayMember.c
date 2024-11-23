#include "main.h"

/**
 * displayMember - Displays the members of the church
 *
 * Return: Nothing
 */
void displayMember()
{
    if (count == 0) {
        printf("No members to display. Please add members to your parish database.\n");
        return;
    }

    printf("\nList of Parishioners at St. Ignatius Catholic Church, Magboro\n");
    printf("ID                  %-20s%-20s%-20s%-20s\n", "NAME", "GENDER", "COMMUNICANT", "SOCIETY");
    printf("----------------------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-20d%-20s%-20s%-20s%-20s\n",
               members[i].id,
               members[i].name,
               members[i].gender,
               members[i].communicant,
               members[i].society);
    }
}