#include<bits/stdc++.h>
using namespace std;
int main(){int r;
cin>>r;
int i=1;
while(i<=r){
	int space=1;
	while(space<=r-i){
		cout<<" ";
		space++;}
	int star=1;
	while(star<=2*i-1){
		if(star==1||star==2*i-1)cout<<"#";
        else cout<<" ";
		star++;
}	
	cout<<endl;
	i++;
}
i=1;int r1=r;
while(i<=r){
	int space=1;
	while(space<i){
		cout<<" ";
		space++;
	}
	int star=1;
	while(star<=2*r1-1){
		if(star==1||star==2*r1-1)cout<<"#";		
		else cout<<" ";
		star++;
	}
	r1--;
	
	
	cout<<endl;
	
	
	
	
	
	i++;
}
return 0;
}
