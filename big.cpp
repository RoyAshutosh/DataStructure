#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using  namespace std;
int main() {
    int n; cin >> n;
    vector<string> v;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        v.push_back(s);

    }
    sort(v.begin(), v.end());
    for (auto it : v)
    {
        cout << it << endl;
    }
    return 0;
}
