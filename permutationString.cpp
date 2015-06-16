//Implement a routine that finds the number of permutations of string.


#include <iostream>
#include <string>
using namespace std;
int permutationString(string s){
    //string ret="";
    int len = s.length();
    int r ;
    if(len == 1)return 1;
    else{
        s.erase(0, 1);
        r =  len*permutationString(s);
        return r;
    }
}
int main()
{
    string s = "heww";
    int r = permutationString(s);
    cout<<r<<endl;
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

void swap(char &a, char &b){
    char temp;
    temp = a;
    a = b;
    b = temp;
}
void permutation(string s, int x, int y){
    int j;
    if(x == y)
        cout<<s<<"\t";
    else{
        for(j = x; j < s.length(); ++j){
            swap(s[x], s[j]);
            permutation(s, x+1, y);
            swap(s[x], s[j]);
        }
    }
}

int main()
{
    string s = "abc";
    permutation(s, 0, 2);
    return 0;
}