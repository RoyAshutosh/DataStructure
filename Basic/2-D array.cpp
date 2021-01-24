#include<iostream>
using namespace std;
int main(){
	int Arr1[3][4]={{1,3,5,7},{2,4,6,8},{0,1,0,1}};
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){														//array in stack...
			cout<<Arr1[i][j]<<"\t";
		}
	}
	int *Arr2[3];
	int count =0;
	Arr2[0]=new int[4];															//array in stack and heap...
	Arr2[1]=new int[4];
	Arr2[2]=new int[4];
	for(int i =0;i<3;i++){
		for(int j=0;j<4;j++){
			Arr2[i][j]=count+10;
			count++;
		}
	}
		for(int i=0;i<3;i++){
			for(int j=0;j<4;j++){
			cout<<Arr2[i][j]<<"\n";	
		}
	}
	
	char **Arr3;
	Arr3=new char*[3];
	Arr3[0]=new char[4];
	Arr3[1]=new char[4];															//array fully  in heap....
	Arr3[2]=new char[4];
		for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			Arr3[i][j]='A';
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<Arr3[i][j]<<"\t";
		}
	}	
}
