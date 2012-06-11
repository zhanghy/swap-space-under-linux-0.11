#include<stdio.h>
#include<fcntl.h>
int main()
{
	int	fd1,fd2;

	fd1 = open("small.txt",O_RDWR);	
	if(!fd1)
	{
		printf("small open failed.\n");
	}

	fd2 = open("big.txt",O_RDWR);	
	if(!fd2)
	{
		printf("big open failed.\n");
	}
	return 0;
}
