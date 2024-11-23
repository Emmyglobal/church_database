# church_database
# Magboro Parish Database
This program is a simple Parishioner Management System designed to manage and store information about parishioners in Magboro Parish.
It provides a user-friendly interface for adding new parishioners, displaying existing records, and persisting data across sessions using a file.

# Key Features
- Add Parishioner:

Collects parishioner details such as ID, name, gender, communicant status, and society.
Validates inputs to ensure correctness before storing.
- Display Parishioner:

Displays all saved parishioners in a neatly formatted table.
Uses appropriate alignment for better readability.
- Data Persistence:

Automatically loads existing data from a file (members.txt) when the program starts.
Saves updated data back to the file when the program exits.
- Error Handling:

Handles invalid user inputs gracefully (e.g., non-numeric entries for menu options).
Prevents buffer overflow and improper input that could crash the program.
- Menu-Driven Interface:

Allows users to navigate through various features using a numeric menu.
Ensures the program runs continuously until the user chooses to exit.


# How It Works
1. Initialization:

The program initializes by loading existing data from members.txt.
If the file does not exist, it starts with an empty record.
2. Main Menu:

 Displays a menu with options to:
Add a new parishioner.
Display all parishioners.
Exit the program and save data.
3. User Choices:

Based on the user's choice, the program:
Option 1: Prompts for parishioner details and stores them in memory.
Option 2: Displays all parishioners in a tabular format.
Option 3: Saves data to the file and exits.
4. Data Storage:

Parishioner data is stored in a structured array of records (memb).
Changes are saved to members.txt at the end of the session to ensure data persistence.
5. Input Validation:

Ensures that only valid integers are accepted for menu choices.
Prevents errors by clearing invalid input from the buffer.



# File Descriptions
- main.c:

Entry point of the program.
Handles the main menu loop and orchestrates program flow.
- addMember.c:

Defines the functionality to add a new parishioner to the database.
- displayMember.c:

Handles the display of parishioner records in a neatly formatted table.
- loadFile.c:

Reads data from members.txt at the start of the program.
- saveFile.c:

Writes updated parishioner data to members.txt when the program exits.
- main.h:
Header file that contains common definitions, declarations, and global variables used across the program.

# Limitations
- The program can handle a maximum of MAX_NUM parishioners due to memory constraints.
- Input validation does not ensure string length restrictions for fields like name.

# Future Improvements
- Implement better error logging for file operations.
- Allow dynamic resizing of the parishioner database.
- Enhance data validation for fields like name, gender, and society.
- Add features for searching and updating parishioner records.
- Secure data storage using encryption.


# Example of Implementation

## Menu
 Welcome to Magboro Parish Database

Select your option

1. Add Parishioner
2. Display Parishioner
3. Exit
Enter your choice to proceed:

## Display Parishioner
ID    NAME               GENDER      COMMUNICANT     SOCIETY         
1     John Doe           Male        Yes             Choir           
2     Mary Smith         Female      No              Altar Servers   

