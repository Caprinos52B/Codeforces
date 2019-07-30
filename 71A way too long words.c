#include<stdio.h>
#include<string.h>

int main(){
	int i,n,len;
	char a[101];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		len=strlen(a);
		if(len<11)
			printf("%s\n",a);
		else
			printf("%c%d%c\n",a[0],len-2,a[len-1]);
	}
	return 0;
}
