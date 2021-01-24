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

int main(){
	Array arr={{1,2,3,4,5},10,5};
	Display(arr);
	cout<<"=======Append======="<<endl;
	Append(&arr,22);
	Display(arr);
	cout<<"======Insert========"<<endl;
	Insert(&arr,2,100);
	Display(arr);
}
