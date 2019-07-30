#include<iostream>
using namespace std;

int main(){
	long long a[100000],min,pos[3]={0,0,0},i,diff;
	int n=0,flag;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(i==0)
			min=a[0];
		else{
			if(a[i]<=min)
				min=a[i];
				pos[2]=i;
		}
	}
	for(i=0,flag=0,diff=0;i<=pos[2];i++){
		if(a[i]==min){
			if(flag==0){
				pos[0]=i;
				flag++;
			}
			else if(flag==1){
				pos[1]=i;
				diff=pos[1]-pos[0];
				flag++;
			}
			else{
				pos[0]=pos[1];
				pos[1]=i;
				if(pos[1]-pos[0]<diff){
					diff=pos[1]-pos[0];
					flag++;
				}
			}
		}
	}
	cout<<diff;
	return 0;
}
