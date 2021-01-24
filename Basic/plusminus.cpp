//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int Arr[n];
//    float pos=0,neg=0,zr=0;
//    for(int i=0;i<n;i++){
//        cin>>Arr[i];
//    }
//    for(int i=0;i<n;i++){
//        if(Arr[i]<0){
//            neg+=1;
//        }
//		else if(Arr[i]>0){
//            pos+=1;
//        }
//		else {
//            zr+=1;
//        }
//    }
//    cout<<pos/n<<endl<<neg/n<<endl<<zr/n;
//}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(j>=n+1-i && j<=n){
                cout<<"#";
            }else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
