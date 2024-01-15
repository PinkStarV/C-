#include<stdio.h>
//#号会把传入来的数据转换为字符串类型
#define STR(n) #n

#define RUN(func){\
    func;\
    printf("%s run done\n",#func);\
}

void test01(){
    printf("this is test01\n");
    return;
}

void test02(int a,int b){
    printf("this is test02 : %d,%d\n",a,b);
    return ;
}
//##的作用是连接
#define CAT(a,b) a##b

int main(){
    printf("%s\n",STR(hello));
    RUN(test01())
    RUN(test02(2i,3));

    int n10 = 123.,n11 = 456;
    CAT(n,10) = 789;
    printf("n10 = %d,n11 = %d\n",n10,n11);
    return 0;
}
