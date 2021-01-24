#include<iostream>
using namespace std;
int power(int m,int n){
	if(n==0)
		return 1;
	return power(m,n-1)*m;
}
//alternative for space complexcity...
int power2(int m,int n){
	if(n==0)
		return 1;
	if(n % 2== 0)
		return power2(m*m,n/2);
	return m*power2(m*m,(n-1)/2);
}

int main(){
	int x=3,y=4;
	cout<<power(x,y)<<endl;
	cout<<power2(x,y)<<endl;
	return 0;
}
