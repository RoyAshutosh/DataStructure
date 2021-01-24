#include<iostream>
using namespace std;
int fact1(int n){
	if(n==0 || n==1)
		return 1;
	else
		return fact1(n-1)*n;
}
int main(){
	int x=5;
	cout<<fact1(x);
}





//int fact2(int n){
//	int f=1;
//	for(int i =n;i>0;i--){
//		f *= i;
//	}
//	return f;
//}
//int main(){
//	printf("%d ",fact2(0));
//}
