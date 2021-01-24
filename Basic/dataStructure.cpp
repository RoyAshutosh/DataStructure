                         //DATASTRUCTURE CHITSHEET.....
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct Rectangle{
	int length;
	int breadth;
};
//int main(){
//	int Arr[5]={1,2,3,4,5};
//	int *p;
//	p = Arr;  
//	//OR p= &Arr[0];
//	cout<<Arr[2]<<endl<<p[2]<<endl;
//	Rectangle r={15,6};
//	int area=r.length * r.breadth;
//	cout<<"Area: "<<area<<endl;
//	r.length=10;
//	int area2=r.length * r.breadth;
//	cout<<"Area: "<<area2<<endl;
//	
//	//dynamic memory allocation at heap...
//	int *ptr;
//	ptr=(int*)malloc(sizeof(Arr));                             // C Language type....
//	ptr[0]=10;ptr[1]=20;ptr[2]=30;ptr[3]=40;ptr[4]=50;
//	cout<<ptr[3]<<endl;
//	int *ptr2;
//	ptr2=new int[sizeof(Arr)];                                 //  C++ language type...
//	ptr2[0]=101;ptr2[1]=202;ptr2[2]=303;ptr2[3]=404;ptr2[4]=505;
//	cout<<ptr2[4]<<endl;
//	Rectangle *ptr3;
//	ptr3= new Rectangle;	
//	ptr3->breadth=10;
//	(*ptr3).length=50;
//	cout<<ptr3->length<<endl;
//	cout<<(*ptr3).breadth<<endl;
//	delete []ptr;
//	delete []ptr2;
//	delete ptr3;
//}

//call by address.bcs this kind of thing cant be done by passing value as one function cann't access the value of different function bt can access the address...
//void swap(int *x,int *y){
//	int temp= *x;
//	*x= *y;
//	*y=temp;
//}
//int main(){
//	int a=10,b=20,c;
//	cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
//	swap(&a, &b);
//	cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
//}



//call by refference ...it works bcs refferences are just alias of actual parameters...and don't consumed memory...as another name of parameter...
//void swap(int &x,int &y){
//	int temp=x;
//	x=y;
//	y=temp;
//}
//int main(){
//	int a=10,b=20,c;
//	cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
//	swap(a,b);
//	cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
//}



//void fun(int arr[],int size){
//	for(int i=0;i<size;i++){
//		cout<<arr[i]<<" ";
//	}
//}
//
//int main(){
//	int a[]={1,2,3,4,5};
//	int len=(sizeof(a)/sizeof(a[0]));
//	cout<<len<<endl;
//	fun(a,len);
//}

//dynamically in heap...
int *fun(int size){
	int *p;
	p=(int *)(malloc(size));
	//or p= new int[size];
	for(int i=0;i<size;i++){
		p[i]=i+1;	
	}
	return p;
}

int main(){
	int *ptr,sz=10;
	ptr=fun(sz);
	for(int i=0;i<sz;i++)
		cout<<ptr[i]<<" ";
}














