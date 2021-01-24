#include<iostream>
using namespace std;
int main(){
    int *p,n,maxCount=0;
    cin>>n;
    p=new int[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
//    for(int i=0;i<n;i++){
//        cout<<p[i]<<"  ";
//    }
    int maxNum=p[0];
    for(int i=1;i<n;i++){
        if(p[i]>maxNum){
            maxNum=p[i];
        }
    }
    for(int i=0;i<n;i++){
        if(p[i]==maxNum)
            maxCount++;
    }
    cout<<maxCount;
    delete []p;
}
