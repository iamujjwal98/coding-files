#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;int r1,r2;
	int p1=1,p2=1;
	cin>>n;cin>>r1>>r2;
	for(int i=1;i<=n;i++)
{
	if(i==1||i==2)cout<<1<<" ";
	else
	   {if(i%2!=0){p1=p1*r1;cout<<p1<<" ";}
	    else {p2=p2*r2;cout<<p2<<" ";}	
		
    	}
}
	
	return 0;
}
