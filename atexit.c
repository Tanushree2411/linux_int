#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>


void callback1()
{
printf("callback1 fun called");
}

void callback2()
{
printf("callback2 fun called");
}

void callback3()
{
printf("callback3 fun called");
}
int main()
{
printf("registering callback1");
atexit(callback1);//regs fun callabck1 with kernel
printf("registering callback2");
atexit(callback2);//regs fun callabck1 with kernel
printf("registering callback3");
atexit(callback3);//regs fun callabck1 with kernel
printf("main() exiting now");
exit(0); //_exit(0) will not call fun which are previosuly registerd by atexit fun
}

