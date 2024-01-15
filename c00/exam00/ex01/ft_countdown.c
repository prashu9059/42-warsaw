#include <unistd.h>
int main(void){
  int i;
  i=58;
  while(i-->48){
  write(1,&i,1);
  }
  write(1,"\n",1);

}
