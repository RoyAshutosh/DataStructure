#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Rectangle{
private:	
	int length;
	int breadth;
public:	
	Rectangle(){
		length=0;breadth=0;
	}
	Rectangle(int l,int b){
		length=l;
		breadth=b;
	}
	void initializer(int l,int b){
		length=l;
		breadth=b;
	}
	int area()
	{
		return length * breadth;
	}
	int perimeter(){
		return 2 *(length + breadth);
	}
	void setLength( int l){
		length = l;
	}
	int getLength(){
		return length;
	}
	void setBreadth(int b){
		breadth= b;
	}
	int getBreadth(){
		return breadth;
	}
	~Rectangle(){
		cout<<"EOO:Destructor Called!!!"<<endl;
	}
	
};
int  main(){
	Rectangle r;
	Rectangle r2(10,20);
	int x,y;
	cout<<"enter the length and breadth: ";
	cin>>x>>y;
	r.initializer(x,y);
	int a= r.area();
	cout<<"area: "<<a<<endl;
	int p=r.perimeter();
	cout<<"perimeter: "<<p<<endl;
	int a2= r2.area();
	cout<<"area: "<<a2<<endl;
	int p2=r2.perimeter();
	cout<<"perimeter: "<<p2<<endl;
return 0;
}
