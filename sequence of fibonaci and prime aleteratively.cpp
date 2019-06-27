#include<bits/stdc++.h>
using namespace std;
bool check(int num){
	for(int j=2;j<=sqrt(num);j++){
		if(num%j==0)return false;
	}return true;
}
int prime(int p){
	int count=1;
	if(p==1)return 2;
	else { int num=3;
		   while(count<=p){
		   //	if(count==p)return num;
		     int b=check(num);
		     if(true){count++;
		     if(count==p)return num;
			 num+=2;
			 }
			else num+=2; 
		    }   
			  
         }
}
int fib(int s){
	if(s==1||s==2) return 1;
	else return fib(s-1)+fib(s-2); 
}

  int main(){
	int n;cin>>n;
	if(n%2==0)cout<<prime(n/2);
	else cout<<fib((n+1)/2);
	
	return 0;
}
