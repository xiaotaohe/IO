#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

int main(void* argc,char* argv[])
{
	int fd1 = open(argv[1],O_RDONLY,0666);
	int fd2 = open(argv[2],O_CREAT | O_WRONLY,0666);
	if(fd1<0||fd2<0)
	{
		printf("open file error!\n");
		exit(0);
	}
	else
	{
		char buf[1024];
		int length = 0;
		if(length = read(fd1,buf,1024)<0)
		{
			printf("read error!\n");
			exit(1);
		}
		if(length = write(fd2,buf,1024)<0)
		{
			printf("write error!\n");
			exit(2);
		}
		printf("write success!\n");
	}
	return 0;
}
