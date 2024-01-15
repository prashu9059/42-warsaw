#include <unistd.h>
void number(){
int i;
for(i='0';i<='9';i=i+1){
write(1,&i,1);
}
}
int main(void){
number();
}

