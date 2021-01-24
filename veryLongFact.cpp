// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include<bits/stdc++.h>
// using namespace std;
//
//
// int main() {
//     vector<int> nums;
//     nums.push_back(1);
//     int N;
//     cin>>N;
//     for(int i=1;i<=N;i++){
//         for(int j=0;j<nums.size();j++)
//           nums[j]*=i;
//         for(int j=0;j<nums.size()-1;j++){
//             nums[j+1] += nums[j]/10;
//             nums[j] %= 10;
//         }
//         while(nums[nums.size()-1]/10){
//             nums.push_back(nums[nums.size()-1]/10);
//             nums[nums.size()-2]%=10;
//         }
//     }
//     for(int i=nums.size()-1;i>=0;i--) cout<<nums[i];
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
	 int a[170],temp,n,m;
	 cin>>n;
   a[0]=1;
   m=1;
   temp = 0;
   for(int i=1;i<=n;i++){
     for(int j=0;j<m;j++){
       int x = a[j]*i+temp;
       a[j]=x%10;
       temp = x/10;
        }
      while(temp!=0){
        a[m]=temp%10;
        temp = temp/10;
        m++;
                }
              }
              for(int i=m-1;i>=0;i--){
              	cout<<a[i];
			           }
        cout<<endl;
}
