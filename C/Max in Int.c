#include <stdio.h>
int max(int x,int y){return x>y?x:y;}
int main() {
	int n,maxv,cur;
	scanf("%d %d",&n,&maxv);
	for(int i=1;i<=n;i++){
	    scanf("%d",&cur);
	    maxv=max(maxv,cur);
	}
	printf("%d",maxv);

}

