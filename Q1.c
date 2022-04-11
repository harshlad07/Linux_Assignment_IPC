#include<stdio.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<sys/ipc.h>

int main()
{
char *pnt;
int ID;
id=shmget(48,250,IPC_CREAT|0644);
if(ID<0)
{
perror("shmget");
return 0;
}
printf("ID is = %d\n",ID);
p=shmat(ID,0,0);
printf("Data:");
scanf("%s",pnt);
return 0;
}
