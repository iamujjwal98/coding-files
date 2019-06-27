#include<bits/stdc++.h>
using namespace std;
int check(int n){
    int sum=0;
	while(n>0){
	int r=n%10;
    int c=r*r*r;
    sum=sum+c;
	n=n/10;
	}
	return sum;
}
int main(){
	int f,l;cin>>f>>l;
	for(int i=f;i<=l;i++){
	int b=check(i);
	if(b==i)cout<<i<<endl;
	}
	return 0;
}
