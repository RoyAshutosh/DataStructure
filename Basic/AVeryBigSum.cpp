#include<iostream>
#include<vector>
using namespace std;
long aVeryBigSum(vector<long> ar) {
    long int temp = 0;
    for(auto x : ar)
    {
        temp += x;
    }
    return temp;
}
int main(){
    vector<long> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<aVeryBigSum(arr);
}

