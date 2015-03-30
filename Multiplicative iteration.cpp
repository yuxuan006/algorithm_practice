//Assume A =1, B = 2...Given a string and integer n, A = 1*n, B = 2*n.... If result > 26, mod 26. Print the result in a string.

#include <iostream>
#include <string>

using namespace std;

string encryp(string s, int n){
    string r;
    for(int i = 0; i < s.size(); ++i){
        char c = ((s[i]-'A'+1)*n%26)+'A'-1;
        r.push_back(c);
    }
    return r;
}

int main(){
    string s= {"ABCD"};
    cout<<encryp(s,6)<<endl;
}
