#include<iostream>
using namespace std;
class Array{
	private:
		int *A;
		int size;
		int length;
	public:
		Array(){
			int size=10;
			int length=0;
			A=new int[10];
		}
		Array(int sz){
			int size=sz;
			int length=0;
			A=new int[sz];
		}
		~Array(){
			delete []A;
		}
		void Display();
		void Insert(int index,int el);
		int Delete(int index);
};
void Array::Display(){
	for(int i=0;i<length;i++){
		cout<<A[i]<<" ";
	}
	cout<<"\n";
}
void Array::Insert(int index,int el){
	if(index>=0 && index<=length){
		for(int i=length-1;i>=index;i--){
			A[i+1]=A[i];
		}
			A[index]=el;
			length++;
	}
}
int Array::Delete(int index){
	int x=0;
	if(index>=0 && index<=length-1){
		x=A[index];
		for(int i=index;i<=length-1;i++){
			A[i]=A[i+1];
		}
		length--;
	}
	return x;
}

int main(){
	Array arr(10);
	arr.Insert(0,10);
	arr.Insert(1,15);
	arr.Insert(2,30);
	arr.Insert(3,45);
	arr.Insert(4,100);
	arr.Display();
	cout<<arr.Delete(2)<<endl;
	arr.Display();
	return 0;
}
