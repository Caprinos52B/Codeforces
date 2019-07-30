#include<stdio.h>

int main(){
	int w,v,u;
	scanf("%d",&w);
	v=w/2;
	u=v;
	if(w%2==0&&w!=2){
		if((v+1)%2==0&&(u-1)%2==0)
			printf("YES");
		else if(v%2==0)
			printf("YES");
		else
			printf("No");
	}
	else
		printf("NO");
	return 0;
}
