#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
void main()

{

int fd1,fd2;
char buff[6];
fd1=open("t3.txt",O_RDONLY);
fd2=creat("t4.txt",0777);
lseek(fd1,14,SEEK_SET);
read(fd1,buff,6);
write(1,buff,6);
close(fd1);
close(fd2);

}





#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
void main()
{
int fd1,fd2;
char buff[8];
fd1=open("t1.txt",O_RDONLY);
fd2=creat("t4.txt",0777);
lseek(fd1,14,SEEK_SET);
read(fd1,buff,8);
write(fd2,buff,8);
close(fd1);
close(fd2);
}
