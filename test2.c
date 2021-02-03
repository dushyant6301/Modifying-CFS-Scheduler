/*
Name - Dushyant Singh
Rollno- 2019305
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(){
  	long i=0;
    for(i=0;i<1000000000;i++);
    printf("%s\n","Process without System Call");
}