/*
 * Write a function that reverses the order of the words in a string. For example, your function should transform the string “Do or do not, there is no try.” to “try. no is there not, do or Do”.
 */
#include <iostream>
#include <string>
using namespace std;

void reverseWord(string str){
    string temp = "";
    int len = str.length();
    int i = len-1;
    int k = len;
    for(int i = len-1; i >= 0; --i){
        //identify the words by space
        if(str[i] == ' '){
            temp += str.substr(i+1, k-i-1);
            temp += ' ';//add a space at the end of each word
            k = i;
        }
        //when scan the begining of a string
        if(i == 0){
            temp += str.substr(i, k);
        }
    }
    cout<<temp<<endl;
    
}
int main()
{
    string s = "Do or do not, there is no try.";
    reverseWord(s);
    return 0;
}