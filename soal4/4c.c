#include <stdio.h> 
#include <stdlib.h> 
#include <fcntl.h> 
#include<errno.h> 
#include<sys/wait.h> 
#include <unistd.h> 
int main(){  
	int p[2]; 
	pipe(p); 
	if(!fork()) 
	{
		close(1); 
		dup(p[1]);
		close(p[0]); 
		
		execl("ls","ls",NULL); 
	} 
	else
	{ 
		close(0); 
		dup(p[0]); 
		close(p[1]); 
		execl("wc","wc","-l", NULL); 
	} 
} 
