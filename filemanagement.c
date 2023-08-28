#include<unistd.h>
#include<fcntl.h>

void main()
{
int fd1,fd2;
char buff[20];
fd1=open("t1.txt",O_RDONLY);
fd2=creat("t2.txt",0777);
read(fd1,buff,20);
write(fd2,buff,20);
close(fd1);
close(fd2);

}

