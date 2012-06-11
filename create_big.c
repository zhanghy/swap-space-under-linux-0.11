#include <stdio.h>
#include <fcntl.h>

int main()
{
        int i,fd;
        char string[10]="abcdedfg\0";
        fd = open("big.txt",O_CREAT|O_RDWR);
        for(i = 0;i<4000000;i++)
        {
                write(fd,string,4);
        }
        return 0;
}

