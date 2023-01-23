#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argC, char *argV[]){

int fd;
char buffer[2048];
int count;

if(argC == 0){
   fd = open(0, O_RDWR);
   read(0, buffer, 2048);
   }
else{
for(int i = 1; i < argC; i++){
   fd = open(argV[i], O_RDONLY);

   count = read(fd, buffer, 2048);
   write(1, buffer, count);
   close(fd);
   }
 }
return 0;
}


