//Find the seed numbers of a given integer.

//123 is the seed number of 768. 123*1*2*3 = 768

#include <iostream>
#include <string>
using namespace std;
void findSeed(int n){
    for(int i = 1; i < n; ++i){
        int prod = i;
        
        string s = to_string(prod);
        for(int j = 0; j < s.size(); j++){
            int temp = s[j] - '0';
            prod *= temp;
        }
        if(prod == n){
            cout<<i<<endl;
        }
    }
}
int main()
{
    int n = 4977;
    findSeed(n);
    return 0;
}