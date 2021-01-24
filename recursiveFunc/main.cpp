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
