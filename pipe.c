#include<stdio.h>
#include<unistd>

int main()

{
int pipefds1[2],pipefds2[2];
char pipe1writemessage[60]="bonjour";
char pipe2writemessage[60]="hello";
char readmessage[90];
int rs1,rs2;
pid_t pid;
rs1=pipe(pipefds1);
	if()



}




#include<stdio.h>
#include<unistd.h>
int main()
{
int pfds1[2],pfds2[2];
char pipe1writemessage[60]="namasthe";
char pipe2writemessage[60]="vankkam";
char readmessage[90];
int rs1,rs2;
pid_t pid;
rs1=pipe(pfds1);
	if(rs1==-1)
		{
		 printf("unable to create pipe 1\n");
		 return 1;
		}
rs2=pipe(pfds2);
	if(rs2==-1)
	 	{	
		  printf("unable to create pipe 2\n");
		 return 1;
		}
pid=fork();
if(pid!=0)
	{
	 close(pfds1[0]);
	 close(pfds2[1]);
	 printf("writing to pip1 at parent process->->-> message is ->->->\t%s\n",pipe1writemessage);
	 write(pfds1[1],pipe1writemessage,sizeof(pipe1writemessage));
	// wait();
	 read(pfds2[0],readmessage,sizeof(readmessage));
		printf("message readed from pipe 2 from child process->>> \t%s\n",readmessage);
	}
else
	{
	 close(pfds1[1]);
	 close(pfds2[0]);
	 read(pfds1[0],readmessage,sizeof(readmessage));
	 printf("message reraded from pipe1 parent process ->>>> messsage is ->->%s\n",readmessage);
	 printf("writing to pipe 2 at child process ->>> message is ->->-> \t%s\n",pipe2writemessage);
	 write(pfds2[1],pipe2writemessage,sizeof(pipe2writemessage));
	}
return 0;
}
