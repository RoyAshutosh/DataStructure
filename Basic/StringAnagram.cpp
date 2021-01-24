#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	char A[]="decimal";
	char B[]="medical";
	int H[25]={0};
	int i;
	for(i=0;A[i]!='\n';i++){
		H[A[i]-97] +=1;
	}
	for(i=0;B[i] !='\0';i++){
		H[B[i]-97] -=1;
		if(H[B[i]-97] <0){
			printf("Not Anagram");
			break;
			printf("Anagram");
		}
	}
	if(B[i]=='\0'){
		cout<<"Anagram"<<endl;
	}
}
