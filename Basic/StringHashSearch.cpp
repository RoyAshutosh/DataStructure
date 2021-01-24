#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char A[]="how are you all";
	int H[25]={0};
	for(int i=0;A[i]!='\n';i++){
		H[A[i]-97]+=1;
	}
	for(int i=0;i<=25;i++){
		if(H[i] > 0){
			printf("%c:",i+97);
			printf("%d ",H[i]);
		}
	}
}
