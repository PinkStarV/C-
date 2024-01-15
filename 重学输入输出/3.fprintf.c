#include<stdio.h>

int main(){
    fprintf(stdout,"hello world\n");
    int n;
    fscanf(stdin,"%d",&n);
    fprintf(stderr,"n = %d\n",n);
    
    return 0;
}
