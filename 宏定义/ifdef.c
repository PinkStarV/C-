#include<stdio.h>
#ifndef DEBUG
#define DEBUG
#endif
//ifdef 判断宏是否被定义了
#ifdef DEBUG
int a = 1;
#else
int a = 2;
#endif


int main(){
    printf("a = %d\n",a);
    return 0;
}
