#include <iostream>
using namespace std;

void fun1(int a){
if(a>0){
    printf("%d ",a);
    fun1(a-1);
    cout<<endl;
    cout<<a;
}
}

int main()
{
    int x=3;
    fun1(x);
    return 0;
}

//
//int x=0;
//int fun1(int n){
////	static int x=0;
//	if(n>0){
//	x++;
//	return fun1(n-1)+x;
//	}return 0;
//}
//int main(){
//	int x=5;
//	cout<<fun1(x);
//}










