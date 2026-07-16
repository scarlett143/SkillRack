#include<stdio.h>
char s[101]="0123456789ABCDEF";
void tohexa(int val){
    if(val==0) return;
    tohexa(val/16);
    printf("%c",s[val%16]);
}
int main(){
    int x;
    scanf("%d",&x);
    tohexa(x);
    return 0;
}