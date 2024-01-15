#include<stdio.h>

int main(){
    char s[1000];
    int i = 1;
    while(scanf("%[^\n]",s) != EOF){
        getchar();
        fprintf(stderr,"%d test case\n",i++);
        printf("%s | hello world\n",s);
    }
    return 0;
}
