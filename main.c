#include <string.h>

#include "list.h"
#include "add.h"
#include "get.h"
#include "help.h"

int main(int argc, const char **argv) {
    const char *cmd;
    cmd = argv[1];

    if(!strcmp(cmd, "list")) {
        cmd_list();
    } else if(!strcmp(cmd, "add")) {
        cmd_add(argc, argv);
    } else if(!strcmp(cmd, "get")) {
        cmd_get(argc, argv);
    } else {
        cmd_help();
    }

    return 0;
    
}
