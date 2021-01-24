#include <bits/stdc++.h>

using namespace std;

string numbers = "0123456789";
string lower_case = "abcdefghijklmnopqrstuvwxyz";
string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string special_characters = "!@#$%^&*()-+";

bool Contain( string x , string y ){
    int ok = 0;
    for(auto && it : y)
        for(auto && it2 : x)
            if( it == it2 )
                ok = 1;
    return ok;
}

int main(){
    int n ;
    string s;
    cin >> n >> s;
    int ans = 0;
    if( !Contain( s , numbers ) ) s.push_back( '0' ) , ++ ans;
    if( !Contain( s , lower_case ) ) s.push_back( 'a' ) , ++ ans;
    if( !Contain( s , upper_case ) ) s.push_back( 'A' ) , ++ ans;
    if( !Contain( s , special_characters ) ) s.push_back( ')' ) , ++ ans;
    if( s.size() < 6 ) ans += (6 - s.size());
    cout << ans << endl;
    return 0;
}
