#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int r=1;
	while(r<=n){
		int space=1;
		while(space<=n-r){
			cout<<" ";
			space++;
		}int star=1;
		while(star<=2*r-1){
			if(star%2==0)cout<<" ";
			else cout<<"*";
			star++;
		}
		cout<<endl;
		r++;
	}
	r=1;int n1=n;
	while(r<=n){
		int space=1;
		while(space<=r-1){cout<<" ";
		space++;
		}
		int star=1;
		while(star<=2*n1-1){
			if(star%2==0)cout<<" ";
			else cout<<"*";
			
			star++;
		}
		cout<<"\n";
		n1--;
		
			r++;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
