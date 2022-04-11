#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

int main()
{
  int qID;
  struct msqid_ds b;

  qID=msgget(49,IPC_CREAT|0644);

  printf("qid=%d\n",qID);
  msgctl(qID,IPC_RMID,NULL);

  printf("Number(s) of msg's - %hi\n",b.msg_qnum);
  printf("Number(s) of bytes - %d\n",b.msg_cbytes);
  printf("Maximum number of bytes - %hi\n",b.msg_qbytes);
  
  return 0;
}
