#include<iostream>
using namespace std;
struct Array{
	int A[10];
	int size;
	int length;
};
//Display function:displaying all elements...
void Display(struct Array arr){
	for(int i=0;i<arr.length;i++){
		cout<<arr.A[i]<<endl;
	}
}
//Append function:adding an element at the end of the array..
void Append(struct Array *arr,int x){
	if((*arr).length < (*arr).size){
		(*arr).A[(*arr).length++]=x;
	}
}
//Insert function:inserting an element in a given index...
void Insert(Array *arr,int index,int x){
	if(index >=0 && index <= (*arr).length){
		for(int i=(*arr).length;i>index;i--){
			(*arr).A[i]=(*arr).A[i-1];
		}
		(*arr).A[index]=x;
		(*arr).length++;
		}
	}
//Delete function:deletion of an elements from an certain index...
int Delete(Array *arr,int index){
	int x=0;
	if(index>=0 && index<=(*arr).length-1){
		x=(*arr).A[index];
		for(int i=index;i<(*arr).length-1;i++){
			(*arr).A[i]=(*arr).A[i+1];
		}
		(*arr).length--;
		return x;
	}
	return 0;
}
int main(){
	Array arr={{101,202,303,404,505},10,5};
	Display(arr);
	cout<<"=======Append======="<<endl;
	Append(&arr,22);
	Display(arr);
	cout<<"======Insert========"<<endl;
	Insert(&arr,2,100);
	Display(arr);
	cout<<"======Delete========"<<endl;
	int del_element=Delete(&arr,4);
	cout<<"deleted element is: "<<del_element<<endl;
	Display(arr);
}
