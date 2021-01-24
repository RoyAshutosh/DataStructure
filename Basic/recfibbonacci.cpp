#include<iostream>
using namespace std;

int fib(int n);    //prototype of recursive version
int fib2(int n);   //prototype of loop version
int fib3(int n);   //prototype of function using memoization...
//resurssion
int fib(int n){
	if(n<=1)
		return n;
	return fib(n-2) +  fib(n-1);   //time complexity: order of 2 to the power n....
}

//loop
int fib2(int n){
	int t0=0,t1=1,sum=0;
	if(n<=1){
		return n;
	}
	for(int i=2;i<=n;i++){
		sum=t0+t1;
		t0=t1;
		t1=sum;
	}
	return sum;	
}

//memoization...     //time complexcity :order of n...less memory used so,less space complexcity..
int f[15];
int fib3(int n){
	if(n<=1){
		f[n]=n;
		return n;
	}else{
		if(f[n-2]==-1)
			f[n-2]=fib3(n-2);
		if(f[n-1]==-1)
			f[n-1]=fib3(n-1);
			f[n]=f[n-2]+f[n-1];
		return fib3(n-2) + fib3(n-1);
	}		
}

int main(){
	for(int i=0;i<15;i++){
	f[i]=-1;
}
	int n;
	cout<<"what terms do you want: ";
	cin>>n;
	cout<<fib(n)<<endl;
	cout<<fib2(n)<<endl;
	cout<<fib3(n)<<endl;
}

