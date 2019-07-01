#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int r=1;
	while(r<=n){
		int star=1;
		while(star<=r){
			cout<<"*";
			star++;
		}cout<<endl;
		r++;
	}
	 r=1;int n1=n;
	while(r<=n){
		int star=1;
		while(star<=n1-1){
			cout<<"*";
			star++;
			
		}n1--;
		cout<<endl;
		
		
		
		r++;
	}
	
	
	return 0;
	
}
