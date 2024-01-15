#include <unistd.h>
#include <stdio.h>
void ft_print_number(char c){
write(1,&c,1);
printf("\n");
}
