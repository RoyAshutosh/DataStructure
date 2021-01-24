#include<iostream>
using namespace std;
struct Array {
	int A[10];
	int size;
	int length;
};
void Swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
void Display(struct Array arr){
	for(int i=0;i<arr.length;i++)
		cout<<arr.A[i]<<" ";
}
void Insertsort(struct Array *arr,int x){
	int i=arr->length-1;
	if(arr->length==arr->size)
		return;
	while(i>=0 &&arr->A[i]>x){
		arr->A[i+1]=arr->A[i];
		i--;
	}
	arr->A[i+1]=x;
	arr->length++;
}
int isSorted(Array arr){
	for(int i=0;i<arr.length-1;i++){
		if(arr.A[i]>arr.A[i+1])
			return 0;
	}
	return  1;
}
void Rearrange(Array *arr){
	int i=0;
	int j=arr->length-1;
	while(i<j){
	while(arr->A[i]<0)
		i++;
	while(arr->A[j]>=0)
		j--;
	if(i<j)
		Swap(&arr->A[i],&arr->A[j]);
	}
}
int main(){
	Array arr={{10,20,30,40,50},10,5};
	Array arr2={{-11,33,-12,45,-23},10,5};
	cout<<"=======before insertion=========="<<endl;
	Display(arr);
	cout<<"\n=======after insertion=========="<<endl;
	Insertsort(&arr,35);
	Display(arr);
	cout<<"\n"<<isSorted(arr2);
	cout<<"\n =====after Rearrange======"<<endl;
	Rearrange(&arr2);
	Display(arr2);
	return  0;
}
