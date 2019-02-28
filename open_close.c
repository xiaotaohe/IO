
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(int argc,const char* argv[])
{
	if(argc < 2 )
	{
		printf("input filename!\n");
		exit(1);
	}
	int fd1 = open(argv[1],O_CREAT | O_RDONLY,666);
	if(fd1 == -1)
	{
		printf("open failed!");
		exit(2);
	}
	close(fd1);
	printf("closed succeed!\n");
	return 0;
}

