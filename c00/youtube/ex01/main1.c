//created by prashanth
//project no: printind alphabets
#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(char c){
write(1,&c,1);
};

int main(void){
short i ;
i=57;
while(i>=48){
  ft_print_numbers(i);
  i--;
}
write(1,"\n",1);
}
