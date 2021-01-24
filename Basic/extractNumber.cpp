//#include <iostream> 
//#include <sstream> 
//using namespace std; 
//void findInt(string str) 
//{ 
//    stringstream ss;     
//    ss << str; 
//    string T; 
//    int n; 
//    while (!ss.eof()) { 
//        ss >> T; 
//        if (stringstream(T) >> n) 
//            cout << n << " "; 
//        T = ""; 
//    } 
//} 
//int main() 
//{ 
//    string str;
//	getline(cin,str);
//    findInt(str); 
//    return 0; 
//} 

//
//int main(){
//char integers[5];
//string line="out13 4";
//int j=0;
//for(int i=0; line[i]!='\0';i++){ 	
//	if (line[i]>='0'&& line[i]<='9'){
//		if(line[i+1] != ' ' ){
//		
//integers[j]=line [i];
//j++;
//}
//		}
//	}
//	for(int i=0;i<5;i++){
//		cout<<integers[i]<<endl;
//	}
//}





#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char str[256]="royashutosh17@gmailout12hello34h";
char t[256];

int main()
{

    int x;
    t[0]='\0';
    while (sscanf(str,"%[^0123456789]%s",tmp,str)>1 || sscanf(str,"%d%s",&x,str))
    {
        if (tmp[0]=='\0')
        {
            printf("%d\r\n",x);
        }
        tmp[0]='\0';

    }
}


