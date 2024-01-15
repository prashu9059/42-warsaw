#include <unistd.h>
void ft_print_comb2(){
char a,b,c,d;
a='0';
while(a <='9'){
  b='0';
   while(b <= '9'){
   c='0';
     while(c <= '9'){
	 d='0';
        while(d <= '9'){
		if (a==b && b==c && c==d){
		 d++;
		continue;}
		else if (a==c && b==d){
        d++;
		continue;}
		else if (c==d){
        d++;
		continue;
		}
         write(1,&a,1);
         write(1,&b,1);
         write(1," ",1);
         write(1,&c,1);
         write(1,&d,1);
         if(a!='9'||b!='9'||c!='9'||d!='9')
         write(1,",",1);
	    d++; }
	  c++; }
   b++;
   }
 a++;}
}
void main(){
ft_print_comb2();
}
