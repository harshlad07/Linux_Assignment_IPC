#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
  char a[20];
  int ID;

  printf("Before \n");
  ID=open("newfifo11",O_RDONLY);
  
  printf("After \n");
  read(ID,a,sizeof(a));
  
  printf("data:%s\n",a);
  
  return 0;
}
