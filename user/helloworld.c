#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    char * string = "Hello World xv6\n";
    write(1, string, strlen(string));
    
    exit(0 , "");
}