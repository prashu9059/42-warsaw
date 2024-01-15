#include <unistd.h>
void example2(char c){
write(1,&c,1);
}
int main(){
int i;
i=90;
while(i>=65){
example2(i);
i--;
}
}
