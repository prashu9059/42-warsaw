#include <unistd.h>
int main(void){
int i,j;
for(i=90,j=122;j>=97;j--,i--)
{
if(i%2!=0)
write(1,&i,1);
if(j%2==0)
write(1,&j,1);
}
write(1,"\n",1);
}
