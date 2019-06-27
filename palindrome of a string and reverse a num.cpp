#include <bits/stdc++.h> 
using namespace std;  
void reverseStr(string& str) 
{
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
         swap(str[i], str[n - i - 1]); 
  } 
int main() 
{ 
    string str;
	cin>>str;
	string str2=str; 
    reverseStr(str);
	if(str2==str)cout<<"palindrome";
	else cout<<" not a palindrome";

    return 0; 
} 
