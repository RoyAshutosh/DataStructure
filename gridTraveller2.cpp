#include<iostream>
using namespace std;
int gridTrav(int m,int n){
   if(m==1 || n==1){
    return 1;
  // if(m==0 || n==0){
  //   return 0;
  }
  return gridTrav(m-1,n) + gridTrav(m,n-1);
}
int main(){
  cout<<gridTrav(10,10);

}
