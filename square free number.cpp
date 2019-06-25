#include<bits/stdc++.h>
using namespace std;
int fun(int n){
	int count=0;
	int a[]={2,3,5,7,11,13,17,19};
	for(int i=0;i<8;i++){
	if(n%a[i]==0)count++;

}
return count;
}
int fact(int p){
	if(p==0||p==1)return 1;
	else return p*fact(p-1);
}

int main(){
	int m;cin>>m;
	while(m--){

	int n;cin>>n;
	int p=fun(n);
	int sum=0;
	int t=1;
	while(t<=p){
	sum=sum+fact(p)/(fact(p-t)*fact(t));
	t=t+1;
	}
	cout<<sum<<endl;
	}
	return 0;
}
