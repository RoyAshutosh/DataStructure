#include<iostream>
using namespace std;
struct Array{
	int A[10];
	int size;
	int length;
};
void Display(struct Array arr){
	for(int i=0;i<arr.length;i++)
		cout<<arr.A[i]<<" ";
}
void Swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
void Reverse1(struct  Array *arr){
	int localArr[arr->length];
	for(int i=arr->length-1,j=0;i>=0;i--,j++){
		localArr[j]=arr->A[i];
	}
	for(int i=0;i<arr->length;i++){
		arr->A[i]=localArr[i];
	}
}
);void Reverse2(struct Array *arr){
	for(int i=0,j=arr->length-1;i<j;i++,j--){
		Swap(&arr->A[i],&arr->A[j]
	}
}
int main(){
	Array arr1={{10,20,30,40,50},10,5};
	Array arr2={{100,200,300,400,500},10,5};
	cout<<"====BEFORE REVERSING===="<<endl;
	Display(arr1);
	cout<<endl;
	Display(arr2);
	cout<<"\n ====AFTER REVERSING===="<<endl;
	Reverse1(&arr1);
	Display(arr1);
	cout<<"\n";
	Reverse2(&arr2);
	Display(arr2);
}
