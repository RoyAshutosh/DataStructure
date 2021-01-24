#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//c style structure...

//struct Rectangle{
//	int length;
//	int breadth;
//};
//
//void initialize(Rectangle *r,int l,int b){
//	(*r).length=l;
//	r->breadth=b;
//}
//int area(Rectangle r){
//	return r.length * r.breadth;
//}
//int perimeter(Rectangle r){
//	int p=2*(r.length + r.breadth);
//	return p;
//}
//int main(){
//	Rectangle rec={0,0};
//	int l,b;
//	cout<<"enter  the length and breadth: ";
//	cin>>l>>b;
//	initialize(&rec,l,b);
//	int a=area(rec);
//	int p=perimeter(rec);
//	cout<<"area: "<<a<<endl<<"perimeter: "<<p<<endl;
//	return 0;
//}

//c++ style object structure...

//struct Rectangle{
//	int length;
//	int breadth;
//	
//	void initialize(int l,int b){
//		length=l;
//		breadth=b;
//	}
//	int area(){
//		return length * breadth;
//	}
//	int perimeter(){
//		return 2*(length + breadth);
//	}
//};
//int  main(){
//	Rectangle r;
//	int x,y;
//	cout<<"enter the length and breadth: ";
//	cin>>x>>y;
//	r.initialize(x,y);
//	int a= r.area();
//	cout<<"area: "<<a<<endl;
//	int p=r.perimeter();
//	cout<<"perimeter: "<<p;
//}

//c++ object type class..

class Rectangle{
private:	
	int length;
	int breadth;
public:	
	void initialize(int l,int b){
		length=l;
		breadth=b;
	}
	int area(){
		return length * breadth;
	}
	int perimeter(){
		return 2*(length + breadth);
	}
};
int  main(){
	Rectangle r;
	int x,y;
	cout<<"enter the length and breadth: ";
	cin>>x>>y;
	r.initialize(x,y);
	int a= r.area();
	cout<<"area: "<<a<<endl;
	int p=r.perimeter();
	cout<<"perimeter: "<<p;
}














