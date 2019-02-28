#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>

int main(int argc,const char* argv[])
{
	if(argc<3)
	{
		printf("please input all filename\n");
	}
	int fd = open(argv[1],O_CREAT | O_RDWR,0777);
	int fd1 = open(argv[2],O_CREAT | O_RDWR,0777);
	if(fd<0 || fd1< 0)
	{
		printf("file open failed!\n");
		exit(0);
	}
	char buf[1024];
	memset(buf,0,1024);
	if(read(fd,buf,1024)<0)
	{
		printf("read file failed!\n");
		exit(1);
	}
	else
	{
		if(write(fd1,buf,1024)<0)
		{
			printf("write file failed!\n");
			exit(2);
		}
		printf("read_write succeed!\n");
	}
	close(fd);
	close(fd1);
	return 0;
}


