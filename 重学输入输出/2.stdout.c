#include<stdio.h>

int main(){
    printf("asdfdafa,2134142");
    fflush(stdout);//刷新输出缓冲区
    *((int *)(0)) = 5;

    return 0;
}
