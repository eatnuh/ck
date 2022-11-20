#include <stdio.h>
#include "get.h"

void cmd_get(int argc, const char **argv) {
    const char* key = argv[2];

    printf("[get] key : %s, password : abcdfggasddd\n", key);
}