#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
	int *p,*q;
	p=(int *)malloc(5*sizeof(int));
	p[0]=2;p[1]=4;p[2]=6;p[3]=8;p[4]=10;
	for(int i=0;i<5;i++){
		cout<<p[i]<<"  ";
	}
	printf("\n");
	q=new int[15];
	for(int i=0;i<5;i++){
		q[i]=p[i];
	}
	for(int i=0;i<15;i++){
		cout<<q[i]<<"  ";
	}
	printf("\n");
	delete []p;                       //or free(p);
	cout<<p[3]<<endl;
	cout<<q[3]<<endl;
	p=q;                             //p is pointing on q.... 
	q=NULL;
	for(int i=0;i<15;i++){
		cout<<q[i]<<"  ";
	}
	printf("\n");
	cout<<p[3]<<endl;
	cout<<q[3]<<endl;
}
