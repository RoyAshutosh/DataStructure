#include<iostream>
using namespace std;


template<class T>
class Arithamatic{
private:
	T number1;
	T number2;
public:
	Arithamatic(){
		number1=number2=0;
	}
	Arithamatic(T a,T b);
	T add();
	T sub();
	void initializer(T a,T b);
	~Arithamatic(){
		cout<<"Destructor called!!!"<<endl;
	}
};
template<class T>
Arithamatic<T>::Arithamatic(T a,T b){
	this.number1=a;
	this->number2=b;
}
template<class T>
T Arithamatic<T>::add(){
	return number1+number2;
}
template<class T>
T Arithamatic<T>::sub(){
	if(number1 > number2)
		return number1 - number2;
	return number2 - number1;
}
template<class T>
void Arithamatic<T>:: initializer(T a,T b){
	number1=a;
	number2=b;
}

int main(){
	Arithamatic <int> arith;
	Arithamatic <float> arith2;
	arith.initializer(10,20);
	int add1=arith.add();
	int sub1=arith.sub();
	arith2.initializer(200.75,100.25);
	float add2=arith2.add();
	float sub2=arith2.sub();
	cout<<add1<<endl<<sub1<<endl<<add2<<endl<<sub2<<endl;
	
	return 0;
}
