#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"
#include "config.h"

void load_keys();

void cmd_list() {
    FILE* fp;
    fp = fopen("example.txt", "r");
    char line[MAX_KEY_SIZE + strlen(SEPARATOR) + MAX_CREDENTIAL_SIZE + 1];

    while(fgets(line, sizeof(line), fp)) {
        char* key = strtok(line, ",");
        printf("%s\n", key);
    }
    
    fclose(fp);

}


