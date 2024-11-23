#include "main.h"

/**
 * loadFromFile - Loads members' data from the file into memory
 *
 * Return: Nothing
 */
void loadFromFile() {
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        // File doesn't exist yet; this is okay for the first run
        printf("No existing data found. Starting fresh.\n");
        return;
    }

    int recordsLoaded = 0;

    while (fscanf(file, "%d,%49[^,],%49[^,],%49[^,],%49[^\n]\n",
                  &members[count].id,
                  members[count].name,
                  members[count].gender,
                  members[count].communicant,
                  members[count].society) == 5) {
        recordsLoaded++;
        count++;

        if (count >= MAX_NUM) {
            printf("Warning: Maximum member limit reached. Additional records in the file are ignored.\n");
            break;
        }
    }

    fclose(file);

    if (recordsLoaded > 0) {
        printf("Data loaded successfully. %d records found.\n", recordsLoaded);
    } else {
        printf("No valid data found in the file.\n");
    }
}