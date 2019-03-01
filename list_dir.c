#include<sys/types.h>
#include<stdio.h>
#include<dirent.h>

//目录操作，查看目录下的文件列表
//
int main(void)
{
	struct dirent* ep = NULL;
	DIR* dp = opendir("~");
	if(dp == NULL)
		printf("open file error!\n");
	else
	{
		//读取目录项
		while(ep = readdir(dp))
			//puts(ep->d_name);
			//ep->d_name;
			printf("%s\n",ep->d_name);
		closedir(dp);
	}
	return 0;
}
