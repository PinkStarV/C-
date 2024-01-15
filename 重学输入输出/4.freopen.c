#include<stdio.h>

int main(){
    freopen("output.txt","w",stdout);//r 读文件 w 写文件
    freopen("input.txt","r",stdin);
    printf("hello freopen!\n");
    char s[1000];

    while(scanf("%[^\n]",s) != EOF){
        getchar();
        printf("%s | hello world\n",s);
    }
    return 0;
}
