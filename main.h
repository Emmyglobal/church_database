#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM 100
#ifndef FILE_NAME
#define FILE_NAME "members.txt"
#endif

typedef struct member {
    int id;
    char name[50];
    char gender[50];
    char communicant[50];
    char society[50];
} memb;

// Declare global variables as extern
extern memb members[MAX_NUM];
extern int count;

// Function prototypes
void addMember();
void displayMember();
void saveToFile();
void loadFromFile();

#endif