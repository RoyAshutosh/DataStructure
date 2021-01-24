#include<iostream>
using namespace std;
int sumFunc(int n){
	if(n <= 0)
		return 0;
	return sumFunc(n -1) +n;
}

int main(){
	int x=10;
	int sum=sumFunc(x);
	cout<<sum;
}

 


//int sumFunc2(int n){
//	return n*(n + 1)/2;
//}
//int main(){
//	printf("%d",sumFunc2(10));
//}



//sumFunc3(int n){
//	int sum=0;
//	for(int i=1;i<=n;i++){
//		sum+=i;
//	}
//	return sum;
//}
//int main(){
//	cout<<sumFunc3(10);
//}
