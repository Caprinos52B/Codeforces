#include<iostream>
using namespace std;

int main(){
	long long x,y,z,a,b,supp=0;
	cin>>a>>b>>x>>y>>z;
	if(x*2+y>a)
		supp=x*2+y-a;
	if(z*3+y>b)
		supp+=z*3+y-b;
	cout<<(long long)supp;
	return 0;
}
