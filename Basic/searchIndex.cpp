#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int size;
    cin>>size;
    int Arr[size]={0};
    for(int j=0;j<size;j++){
        int x;
        cin>>x;
        Arr[j]=x;
    }
    for(int i=0;i<size;i++){
//    	cout<<Arr[i]<<"++";
        if(n == Arr[i]){
            cout<<i<<endl;
        }
    }
}
