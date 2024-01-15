#include <unistd.h>
int main(void){
char i=65,j=97;
while(j<123){
   if(i%2==0)
   write(1,&i,1);
   if(j%2!=0)
   write(1,&j,1);
   i++;
   j++;
}
write(1,"\n",1);

}
