#include<bits/stdc++.h>
using namespace std;
int fun(int a[],int temp,int f,int l){
int sum=0;
for(int j=f;j<l;j++){sum=sum+a[j];
}
if(temp>=sum)return 1;
else return 0;	
}
int main(){
	int n;cin>>n;int count=0;
	int a[n];for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i]>a[i+1]&&i<n-1){
			int s=fun(a,a[i],i+1,n);
			if(s==1)count+=1;
		}
}
	cout<<count;
	return 0;
}
