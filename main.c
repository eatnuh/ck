#include <string.h>

#include "add.h"
#include "get.h"
#include "list.h"
#include "help.h"

int main(int argc, const char **argv) {
    const char *cmd;
    cmd = argv[1];

    if(!strcmp(cmd, CMD_LIST)) {
        cmd_list();
    } 
    else if(!strcmp(cmd, CMD_ADD)) {
        cmd_add(argc, argv);
    } 
    else if(!strcmp(cmd, CMD_GET)) {
        cmd_get(argc, argv);
    } 
    else {
        cmd_help();
    }

    return 0;
    
}
