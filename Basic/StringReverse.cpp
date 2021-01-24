#include<iostream>
using namespace std;
//int main(){
//	char A[]="ASHUTOSH";
//	char B[9];
//	int i=0;
//	for(i=0;A[i]!='\0';i++){
//		
//	}
//	i=i-1;
//	int j=0;
//	for(j=0;i>=0;i--,j++){
//		B[j]=A[i];
//	}
//	B[j]='\0';
//	cout<<B<<endl;
//}

int main(){
	char A[]="ASHUTOSH ROY";
	int i,j,t;
	cout<<"main String: "<<A<<endl;
	for(j=0;A[j]!='\0';j++){
		
	}
	cout<<"length of the String: "<<j<<endl;
	j=j-1;
	for(i=0;i<j;i++,j--){
		t=A[i];
		A[i]=A[j];
		A[j]=t;
	}
	cout<<"reversed string: "<<A<<endl;
}
