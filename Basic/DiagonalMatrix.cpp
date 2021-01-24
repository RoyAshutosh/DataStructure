#include<iostream>
using namespace std;

class Diagonal{
	private:
		int n;
		int *A;
	public:
		Diagonal(){
			int n=2;
			A=new int[2];
		}
		Diagonal(int n){
			this->n=n;
			A=new int[n];
		}
		~Diagonal(){
			cout<<"#.#.#.# Destructor called #.#.#.#";
			delete [] A;
		}
		void set(int i,int j,int el){
			if(i == j)
				A[i-1]=el;
		}
		int get(int i,int j){
			if(i == j)
				return A[i-1];
			return 0;
		}
		void Display();
};

void Diagonal::Display(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j)
				cout<<A[i]<<" ";
			else
				cout<<"0 ";
		}
		cout<<endl;
	}
}


int main(){
	
	Diagonal d(5);
	d.set(1,1,10);
	d.set(2,2,20);
	d.set(3,3,30);
	d.set(4,4,40);
	d.set(5,5,50);
	cout<<d.get(4,3)<<" "<<d.get(5,5)<<endl;
	d.Display();
	return 0;
}
