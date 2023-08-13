#include<stdio.h>
#include<unistd.h>
void main()
{
printf("hi i am the main process execdem.c \n");
printf("process id is pid=%d \n",getpid());
char*args[]={"./hello",NULL};
execv(args[0],args);
printf("Hello WORLD");

}




