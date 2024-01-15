#include <unistd.h>
#include <stdio.h>
void ft_is_negative(int n){
   if(n>=0)
     write(1,"P",1);
   else
    write(1,"N",1);
	printf("\n");
}
int main(void){
int i;
printf("enter a number to see whether it is negative or positive :");
scanf("%d",&i);
ft_is_negative(i);
printf("end of the program\n");
}
