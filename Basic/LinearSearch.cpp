#include<iostream>
using namespace std;
struct Array{
	int A[10];
	int size;
	int length;
};
//Display function...
void Display(struct Array arr){
	printf("elements are: \n");
	for(int i=0;i<arr.length;i++)
		cout<<arr.A[i]<<"\t";
}
void Swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
//linear Search...type1;
int LinearSearch(struct Array arr,int key){
	for(int i=0;i<arr.length;i++){
		if(arr.A[i]==key)
			return i;
	}
	return -1;
}
//liear Search...type2;
int LinearSearch2(struct Array *arr,int key){
	for(int i=0;i<arr->length;i++){
		if(arr->A[i]==key){
			Swap(&arr->A[i],&arr->A[i-1]);
			return i;
		}
	}
	return -1;
}
int main(){
	Array arr={{100,200,300,400,500},10,5};
	Display(arr);
	cout<<"\n ======Linear Search type 1 ,without swapping elements======"<<endl;
	int LS1=LinearSearch(arr,300);
	cout<<"index is: "<<LS1<<endl;
	cout<<"\n ======Linear Search type 2 ,after swapping elements======"<<endl;
	int LS2=LinearSearch2(&arr,300);
	cout<<"index is: "<<LS2<<endl;
	Display(arr);
}
