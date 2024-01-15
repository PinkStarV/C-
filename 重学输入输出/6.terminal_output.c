#include<stdio.h>

int main(){
    freopen("/dev/pts/1","w",stdout);
    char s[1000];
    while(scanf("%s",s) != EOF){
        printf("from tty0 : %s\n",s);
    }
    return 0;
}
