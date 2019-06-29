#include<bits/stdc++.h>
using namespace std;
int fun(int y){
	if(y%100==0){if(y%400==0)return 1;
               	else return 0;
	}
	else if(y%4==0)return 1;
	else return 0;
	
	
}
int main(){
	int y;cin>>y;
	int s=fun(y);
	if(s)cout<<"yes a leap yaer";
	else cout<<"not a leap year";
	return 0;
}
