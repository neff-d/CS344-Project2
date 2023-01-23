#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ctype.h>

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
	  for(int j = 0; j < sizeof buffer; j++){
	     buffer[j] = toupper(buffer[j]);
	  }
          write(1,buffer, count);
          close(fd);
  }
}
	return 0;
}

