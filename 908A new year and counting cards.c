#include<stdio.h>
#include<string.h>

int main(){
	char s[51];
	int i,len,cck,flip=0;
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]>=97&&s[i]<=122){
			if(s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117)
				flip++;
		}
		else if(s[i]>=48&&s[i]<=57){
			cck=s[i]-48;
			if(cck%2==1)
				flip++;
		}
	}
	printf("%d",flip);
	return 0;
}
