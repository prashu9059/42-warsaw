#include <unistd.h>

void ft_print_comb2(){
  short v[2];
  v[0]=0;
    while(v[0]<99){
    v[1]=v[0]+1;
	  while(v[1]<100){
	     write_n(v[0]);
	     write(1," ",1);
	     write_n(v[1]);
	     if(v[0]!=99 || v[1] !=100)
	     write(1,",",1);
	     v[1]++;
	  }
  v[0]++;
    }
}
int main(void){
ft_print_comb2();
}
