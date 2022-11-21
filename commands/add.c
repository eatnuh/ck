#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "add.h"

void cmd_add(int argc, const char **argv) {
    FILE* fp;
    FILE* temp;
    fp = fopen("example.txt", "r");
    temp = fopen("temp.txt", "w");

    const char* key = argv[2];
    const char* password = argv[3];
    char line[256];

    while(fgets(line, sizeof(line), fp)) {
        char* templine = (char*)malloc(strlen(line) + 1);
        *templine = 0;
        strcpy(templine, line);
        char* tempKey = strtok(templine, ",");

        if(strcmp(tempKey, key)) {
            fputs(line, temp);
        }
        free(templine);
    }

   
    char* templine = (char*)malloc(strlen(key) + strlen(",") + strlen(password) + 1);
    *templine = 0;
    strcat(templine, key);
    strcat(templine, ",");
    strcat(templine, password);

    fputs(templine, temp);

    free(templine);

    remove("example.txt");
    rename("temp.txt", "example.txt");

    printf("[add] key : %s, password : %s\n", key, password);

}