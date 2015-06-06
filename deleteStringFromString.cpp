/*
 * C++ Program to deletes characters from a string
 */
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
string deleteString(string s1, string s2){
    unordered_map<char, int> um;
    
    for(int i = s2.length() - 1; i >= 0; --i){
        um.insert({s2[i], 1});
    }
    for(int i = 0; i < s1.length(); ++i){
        if(um.count(s1[i]) > 0){
            s1.erase(s1.begin()+i);
            i--;
        }
    }
    return s1;
}
int main()
{
    string s1 = "hello world, kitty!";
    string s2 = "eloi";
    
    string ret = deleteString(s1, s2);
    cout<<ret<<endl;
    return 0;
}

