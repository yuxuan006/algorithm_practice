/*
 * Write a function that finds the longest word in a string.
 */
#include <iostream>
#include <string>
using namespace std;

string LongestWord(string s){
    int len = s.length();
    int working_word = 0;
    string longest=" ";
    int max = 0;
    for(int i = 0; i < len; ++i){
        if(s[i] != ' '){
            working_word++;
        }
        if(s[i] == ' ' || i == len - 1){
            if(working_word > max){
                max = working_word;
                if(i == len - 1){
                    longest = s.substr(i-max+1, max);
                }
                if(s[i] == ' '){
                    longest = s.substr(i-max, max);
                }
            }
            working_word = 0;
        }
    }
    return longest;
}
int main()
{
    
    string s = "this is a string";
    string ret;
    ret = LongestWord(s);
    cout<<ret<<endl;
    return 0;
}

