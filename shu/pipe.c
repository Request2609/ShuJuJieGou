#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
void read_info(int fd );
void write_info(int fd);
int main(){
	
	int fd[2];
	
	pid_t pid ;
	int s ;
	if(pipe(fd)){
		
		printf("创建管道失败\n");
		exit(1);
	}
	pid = fork() ;
	switch(pid){
	
		case 0:

			close(fd[1]);
			read_info(fd[0]);
			exit(0);
		case -1:
			printf("创建失败！\n");	
			break ;
		default:

			close(fd[0]);
			write_info(fd[1]);
			wait(&s);
			exit(0);
	}
}
void write_info(int fd){

	char * buf = "guandaotongxin";
	write(fd , buf , strlen(buf) + 1);
}
void read_info(int fd){

	char  buf[100] ;
	read(fd , buf , 100);
	printf("%s\n",buf);
}
