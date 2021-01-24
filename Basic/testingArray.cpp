#include<iostream>
using namespace std;
int main(){
	int arr[5]={5};   //does not work....
	//altrentv to initialize
	int f[10];
	for(int i=0;i<=10;i++){
		f[i]=-1;
	}
	cout<<f[5]<<endl<<arr[3];
}
