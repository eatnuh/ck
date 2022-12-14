#include "config.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "get.h"

void cmd_get(int argc, const char **argv) {
    const char* key = argv[2];
    char* credential;

    FILE* fp;
    fp = fopen("example.txt", "r");
    char line[MAX_KEY_SIZE + strlen(SEPARATOR) + MAX_CREDENTIAL_SIZE + 1];

    while(fgets(line, sizeof(line), fp)) {
        char* lineKey = strtok(line, ",");
        if(!strcmp(lineKey, key)) {
            credential = strtok(NULL, ",");
        }
    }

    fclose(fp);
    
    printf("[get] key : %s, credential : %s", key, credential);
}