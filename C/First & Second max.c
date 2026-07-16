#include <stdio.h>

int main() {
	int n,maxf,maxs=-1,cur;
	scanf("%d %d",&n,&maxf);
	for(int i=1;i<=n;i++){
	    scanf("%d",&cur);
	    if(cur>maxf){
	        maxs=maxf;
	        maxf=cur;
	    }else if(cur>maxs){
	        maxs=cur;
	    }
	}
	printf("%d %d",maxf,maxs);

}

