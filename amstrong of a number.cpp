#include<stdio.h>
int palindrome(int n1)
{int sum=0;
	while(n1>0){
		int r=n1%10;
		int c=r*r*r;
		sum=sum+c;
		n1=n1/10;
	}
	return sum;
}



int main(){
	int n1;
	scanf("%d",&n1);
	int sum1=palindrome(n1);
	if(sum1==n1){
	printf("the number is palindrome");
	}
	else {
	printf("the number is not a palindrome");
}
return 0;	
}
