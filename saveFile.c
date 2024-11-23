#include "main.h"

/**
 * saveToFile - Saves members to a file
 *
 * Return: Nothing
 */
void saveToFile() {
    FILE *file = fopen(FILE_NAME, "w");
    if (!file) {
        perror("Failed to open file for saving");
        return;
    }

    for (int i = 0; i < count; i++) {
        if (fprintf(file, "%d,%s,%s,%s,%s\n",
                    members[i].id,
                    members[i].name,
                    members[i].gender,
                    members[i].communicant,
                    members[i].society) < 0) {
            perror("Error writing to file");
            fclose(file);
            return;
        }
    }

    fclose(file);
    printf("Data saved successfully to '%s'.\n", FILE_NAME);
}
