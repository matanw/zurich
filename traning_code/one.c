#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    // printf() displays the string inside quotation
    printf("Hello, World!\n");
    if(fork()){
        printf("ffffffffffffffffffffff\n");
    }else{
        printf("ssssssssssssssssssssssss\n");
    }
    return 0;
}