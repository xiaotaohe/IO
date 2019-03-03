#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<string.h>

int main()
{
	int fd1,fd2;
	fd1 = open("t1",O_WRONLY|O_CREAT,0664);
	fd2 = open("t2",O_WRONLY|O_CREAT,0664);
	printf("fd1 = %d fd2 = %d\n",fd1,fd2);
	dup2(1,fd2);
	char * buf = "hhh";
	write(fd2,buf,strlen(buf));
	write(fd2,buf,strlen(buf));
	return 0;
}
