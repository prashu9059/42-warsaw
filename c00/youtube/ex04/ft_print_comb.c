//created by prashanth
//project no:comb
#include <unistd.h>
#include <stdio.h>

void ft_print_comb( ){
 char a,b,c;
 a='0';
 while(a <='7'){
 b=a+1;
 while(b <='8'){
 c= b+1;
 while(c <= '9'){
 write(1,&a,1);
 write(1,&b,1);
 write(1,&c,1);
 if(a!='7'||b!='8'||c!='9'){
 write(1,",",1);}
 c++;}
 b++; }
a++; }
 }


