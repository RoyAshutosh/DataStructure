#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int alicePoint=0;
	int bobPoint=0;
    int A[3]={0}; 
    int B[3]={0};
    for(int i=0;i<3;i++){
        cin>>A[i];
    }
    for(int i=0;i<3;i++){
        cin>>B[i];
	}
    //int alicePoint= (A[0]>B[0]?1:0) + (A[1]>B[1]?1:0) + (A[2]>B[2]?1:0);
    //int bobPoint= (B[0]>A[0]?1:0) + (B[1]>A[1]?1:0) + (B[2]>A[2]?1:0);
    for(int i=0;i<3;i++){
    	if(A[i]>B[i])
    		alicePoint+=1;
    	else if(A[i]==B[i]){
    		alicePoint+=0;
    		bobPoint+=0;
		}else
			bobPoint+=1;
	}
    
    cout<<alicePoint<<" "<<bobPoint;
}
