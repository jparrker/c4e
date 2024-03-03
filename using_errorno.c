#include <stdio.h>

int main() {
    int fd = open("./asdfasdf");
    if(fd == -1) {
        perror("open"); //clang: error: no input files
        return -1;
    }
}