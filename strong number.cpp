#include<bits/stdc++.h>
using namespace std;
int fact(int r){
	if(r==0||r==1)return 1;
	else return r*fact(r-1);
}
int strong(int n)
{int sum=0;
	while(n>0){
		int r=n%10;
		sum=fact(r)+sum;
		n=n/10;
}
return sum;	
}
int main(){
	int n;cin>>n;
	int s=strong(n);
	if(n==s)cout<<"strong";
	else cout<<" not a strong number";
	
	return 0;
}
