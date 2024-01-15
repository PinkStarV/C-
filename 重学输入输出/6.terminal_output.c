#include<stdio.h>

int main(){
    freopen("******","w",stdout);
    char s[1000];
    while(scanf("%s",s) != EOF){
        printf("from tty0 : %s\n",s);
    }
    return 0;
}
