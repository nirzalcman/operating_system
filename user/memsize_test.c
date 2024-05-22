#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
 int size = memsize();
 int* ptr;
 char *out = "The proc size before malloc: ";
 write(1,out,strlen(out));
 printf("%d\n" , size);
 ptr = (int*)malloc(20000);
 size = memsize();
 out = "The proc size after malloc: ";
 write(1,out,strlen(out));
 printf("%d\n" , size);
 free(ptr);
 size = memsize();
 out = "The proc size after malloc free: ";
 write(1,out,strlen(out));
 printf("%d\n" , size);
 return(0);
}
