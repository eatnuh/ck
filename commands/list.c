#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void cmd_list() {
    FILE* fPointer;
    fPointer = fopen("example.txt", "r");
    char line[150];

    while(fgets(line, sizeof(line), fPointer)) {
        char* key = strtok(line, ",");
        printf("%s\n", key);
    }

    fclose(fPointer);

}