#include <stdio.h>
#include <unistd.h>

int main(int argC, char *argV[]){

for(int i = 0; i < argC; i++){
     printf("%d: %s \n", i, argV[i]);
     }


return 0;
}
