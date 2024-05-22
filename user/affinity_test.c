#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
int mask = 101; //101 - cpu 0 and 2 
set_affinity_mask(mask);
while (1) {
    printf("Process %d running\n", getpid());
    sleep(100); // Sleep for a while to make the output readable
  }
  exit(0,"");
}
