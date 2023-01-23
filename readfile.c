#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argC, char *argV[]){

char buffer[2048];
int count;

int fd = open(argV[1], O_RDONLY);

if(fd == -1){
     perror("open");
     exit(1);
   }

count = read(fd, buffer, 2048);

write(1, buffer, count);

close(fd);

return 0;
}

