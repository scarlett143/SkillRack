#include <stdio.h>

int main() {
	int R,C;
	scanf("%d %d",&R,&C);
	int a[R][C];
	
	for(int row=0;row<R;row++){
	    for(int col=0;col<C;col++){
	        scanf("%d",&a[row][col]);
	    }
	}
	int rd[]={-1,-1,-1,0,0,1,1,1};
	int cd[]={-1,0,1,-1,1,-1,0,1};
	for(int row=0;row<R;row++){
	    for(int col=0;col<C;col++){
	        int sum=0;
	        for(int i=0;i<8;i++){
	            int ar=row+rd[i],ac=col+cd[i];
	            if(ar>=0 && ar<R && ac>=0 && ac<C){
	                sum+=a[ar][ac];
	            }
	        }
	        printf("%d ",sum);
	    }
	    printf("\n");
	}
}

