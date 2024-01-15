#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main(){
int fd = open("file.txt",O_RDWR | O_CREAT,0600);
write(2,"hello",5);
sleep(30);
}
