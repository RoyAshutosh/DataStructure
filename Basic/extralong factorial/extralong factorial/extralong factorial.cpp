// extralong factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
/*
int main()
{
    vector<int> nums;
    nums.push_back(1);
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < nums.size(); j++)
            nums[j] *= i;
        for (int j = 0; j < nums.size() - 1; j++) {
            nums[j + 1] += nums[j] / 10;
            nums[j] %= 10;
        }
        while (nums[nums.size() - 1] / 10) {
            nums.push_back(nums[nums.size() - 1] / 10);
            nums[nums.size() - 2] %= 10;
        }
    }
    for (int i = nums.size() - 1; i >= 0; i--) cout << nums[i];
    return 0;
}
*/

int main() {
    int a[170],n;
    cin >> n;
    a[0] = 1;
    int  m = 1;
    int t = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            int x = a[j] * i + t;
            a[j] = x % 10;
            t = x / 10;
        }
        while (t != 0) {
            a[m] = t % 10;
            t = t / 10;
            m++;
        }
    }
    for (int i = m - 1; i >= 0; i--) {
        cout << a[i];
    }
    cout << endl;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
