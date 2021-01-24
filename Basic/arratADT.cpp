#include<iostream>
using namespace std;
struct Array{
	
	int *p;
	int size;
	int length;
};
void Display(struct Array ar){
	cout<<"elements are: "<<endl;
	for(int i=0;i<ar.length;i++){
		cout<<ar.p[i]<<"\n";
	}
}
int main(){
	Array arr;
	int n;
	arr.length=0;
	cout<<"enter the size of arry: ";
	cin>>arr.size;
	arr.p=new int(arr.size);
	cout<<"enter how many ele. to store: ";
	cin>>n;
	cout<<"enter all the elements: ";
	for(int i=0;i<n;i++){
		cin>>arr.p[i];
	}
	arr.length=n;
	Display(arr);
	return 0;
}
