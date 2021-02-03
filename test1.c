/*
Name - Dushyant Singh
Rollno- 2019305
*/

#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(){
	int pid = 0;
  	long i=0;
  	pid = getpid();
    int n = syscall(441,pid,1000000000);
    if(n==0){
    	printf("%s\n","System call was succesful !");
    }
    else{
    	printf("%s\n","Error !!");
    }
    for(i=0;i<1000000000;i++);

    printf("%s\n","Process with System Call");

}