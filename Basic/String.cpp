#include<iostream>
using namespace std;
int main(){
	char A1[5]={'a','b','c','d','e'};
	char A2[]={'a','b','c','d','e','\0'};
	char name[]="ASHU";
	char fullname[]="Ashutosh Roy";
	char statement[]="I am   Ashutosh Roy.";
	// 1.
	
	for(int i=0;i<5;i++){
		cout<<A1[i]<<" ";
	}
	// 2.
	
		for(int i=0;A2[i]!='\0';i++){
	}
	cout<<endl<<A2<<endl;
	// 3.
	
	for(int i=0;i!='\0';i++){
		
	}
	cout<<name<<endl;
	// 4.
	
	cout<<fullname<<endl;
	// 5.
	
	for(int i=0;fullname[i]!='\0';i++){
		if(fullname[i]>=65 && fullname[i]<=90)
			fullname[i]+=32;
		else if(fullname[i]>='a' && fullname[i]<='z')
			fullname[i]-=32;
	}
	cout<<fullname<<endl;
	
	//6.
	
	for(int i=0;statement[i]!='\0';i++){
	if(statement[i]>='A' && statement[i]<='Z')
		statement[i]+=('a'-'A');
	else if(statement[i]>='a' && statement[i]<='z')
		statement[i]-=('a'-'A');
}
cout<<statement<<endl;

	//7.
	
	int word=0;
	for(int i=0;statement[i] !='\0';i++){
		if(statement[i] ==' ' && statement[i-1] !=' ')
			word++;
	}
	cout<<"wordCounts :"<<word+1;
}
















