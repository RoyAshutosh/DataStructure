#include<iostream>
using namespace std;
struct Array {
	int A[10];
	int size;
	int length;
};
//LOOP version....
int BinarySearchLoop(Array arr,int key){
	int low=0;
	int high=arr.length-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(key==arr.A[mid])
			return mid;
		else if(key<arr.A[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
//RECURSIVE version....
int BinarySearchRec(int a[],int low,int high,int key){
	if(low<=high){
		int mid=(low+high)/2;
		if(key==a[mid])
			return mid;
		else if(key<a[mid])
			return BinarySearchRec(a,low,high-1,key);
		else
		return BinarySearchRec(a,low+1,high,key);
	}
	return -1;
}
int main(){
	struct Array arr={{10,20,30,40,50},10,5};
	cout<<"INDEX is :"<<BinarySearchLoop(arr,20)<<endl;
	cout<<"INDEX is :"<<BinarySearchRec(arr.A,0,arr.length,30)<<endl;
	return 0;
}
