#include<stdio.h>
#include<unistd.h>

void main()
{
pid_t id=fork();
int a,b,n;
if(id<0)
{
printf("\nfork failure\n");
}
else if(id==0)

{
//child process
printf("\n**********child process***********\n");
printf("the process id is %d and parent id is %d\n",getpid(),getppid());
printf("enter the number to check even or odd\n");
scanf("%d",&n);
if(n%2==0)

printf("the entred number %d is even\n",n);
else
printf("the entered number %d is odd\n",n);

}
else
{
//parent process
wait();
printf("\n***********parent process*********\n");
printf("the process id is %d\n",getpid());
printf("enter 2 number to check max or min\n");
scanf("%d\n,%d\n",&a,&b);
if(a>b)
printf("%d is greater that %d",a,b);
else 
printf("%d is greater than %d",b,a);
}












}
