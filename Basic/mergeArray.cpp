#include<iostream>
#include<stdlib.h>
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
struct Array* Merge(struct Array *arr1,struct Array *arr2){
	int i=0,j=0,k=0;
	struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i] < arr2->A[j])
			arr3->A[k++]=arr1->A[i++];
		else
			arr3->A[k++]=arr2->A[j++];
	}
	for(;i<arr1->length;i++){
		arr3->A[k++]=arr1->A[i];
	}
	for(;j<arr2->length;j++){
		arr3->A[k++]=arr2->A[j];
	}
	arr3->length = arr1->length + arr2->length;
	arr3->size=10;
}
int main(){
	Array arr1={{10,23,45,67,100},10,5};
	Array arr2={{13,34,56,78,98},10,5};
	Array *arr3;
	arr3=Merge(&arr1,&arr2);
	Display(*arr3);
	return 0;
}
