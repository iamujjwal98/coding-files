#include<bits/stdc++.h>
using namespace std;
int hcf(int a1,int b1){
	if(b1==0)return a1;
	else return hcf(b1,a1%b1);
	
	
	
}



int main(){
	int a,b;
	cin>>a>>b;
	int h=hcf(a,b);
	cout<<h;
	return 0;
}
