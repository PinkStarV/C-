//处理输入数据的时候，用getchar去处理数据是更优的选择
#include<stdio.h>
#ifdef GETCHAR
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    getchar();
    //fflush(stdin);
    char c = 'x';
    scanf("%c",&c);
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    return 0;
}
#endif
#ifdef FFLUSH
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    //getchar();
    fflush(stdin);
    char c = 'x';
    scanf("%c",&c);
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    return 0;

}
#endif
