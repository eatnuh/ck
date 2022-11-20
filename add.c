#include <stdio.h>
#include "add.h"

void cmd_add(int argc, const char **argv) {
    const char* key = argv[2];
    const char* password = argv[3];

    printf("[add] key : %s, password : %s\n", key, password);

}