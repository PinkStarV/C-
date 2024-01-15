#include<stdio.h>

int main(){
    printf("hello world!\n");//stdout
    int n;
    scanf("%d",&n);//stdin
    perror("out of range\n");//stderr

    return 0;
}
