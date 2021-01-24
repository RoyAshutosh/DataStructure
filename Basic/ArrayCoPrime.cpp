#include<iostream>
using namespace std;
//int gcd(int a, int b)
//{
//    if (b == 0)
//        return a;
//    return gcd(b, a % b); 
//     
//}
//int main(){
//   int n;
//   cin>>n;
//   int count=0;
//   int A[n];
//   int B[n];
//   //input in array 1...
//   for(int i=0;i<n;i++){
//       cin>>A[i];
//   }
//   //input in array 2...
//   for(int i=0;i<n;i++){
//       cin>>B[i];
//   }
//   //logic...
//   for(int i=0;i<n;i++){
//       if(A[i] !=0 || B[i] !=0){
//            int GCD=gcd(A[i],B[i]);
//            if(GCD==1){
//                count++;
//                A[i]=B[i]=0;
//            }
//        }
//   }
//   
//   cout<<count;
//    
//    return 0;
//}




#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}
int main(){
   int n,count=0,ctr=0;
   cin>>n;
   int A[n];int B[n];
   int A1[n]={0};int B1[n]={0};
   //input in array 1...
   for(int i=0;i<n;i++){
       cin>>A[i];
   }
   //input in array 2...
   for(int i=0;i<n;i++){
       cin>>B[i];
   }
   //logic...
   for(int i=0;i<n;i++){
       int flag = 0;
       for(int k=0;k<n;k++){
       if(A[i]==A1[k]){
        
            flag = 1;
            break;   
       }
       }
       if(flag ==1){
           flag=0;
           continue;
       }
       
       for(int j=0;j<n;j++){
           int flag2 = 0;
       for(int k=0;k<n;k++){
       if(B[j] == B1[k]) {
        
            flag2 = 1;
            break;   
       }
       }
       if(flag2 ==1){
           flag2=0;
           continue;
       }    
        int GCD=gcd(A[i],B[j]);
        if(GCD > 1){
            A1[ctr]=A[i];
            B1[ctr]=B[j];
            ctr++;
            count++;
        }
    }
   }
   
   cout<<count;
    
    return 0;
}
