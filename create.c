#include<stdio.h>
#include<fcntl.h>
int main()
{
int fd1;
fd1=open("main.c",O_WRONLY,777);
printf("fd1 for the program is %d" ,fd1);
close(fd1);
return 0;
}

