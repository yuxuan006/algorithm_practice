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

//first, in place reverse the string.
//second, in place reverse each word in the string.
#include <iostream>
#include <string>
using namespace std;
string inPlaceReverse(string s){
    int start = 0, end = s.length()-1;
    
    while(start<end){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++; end--;
    }
    return s;
}
string reverseWord(string s){
    int counter = 0;
    string ret = "";
    int len = s.length();
    s = inPlaceReverse(s);
    for(int i = 0; i < len; ++i){
        if(s[i] != ' '){
            counter++;
        }
        if(s[i] == ' '|| i == len - 1){
            if(s[i] == ' '){
                ret += inPlaceReverse(s.substr(i - counter,counter));
                ret += ' ';
            }
            if(i == len - 1){
                ret += inPlaceReverse(s.substr(i - counter+1,counter));
            }
            counter = 0;
        }
    }
    return ret;
}
int main()
{
    string s = "hello world! kitty";
    s= reverseWord(s);
    cout<<s<<endl;
    return 0;
}

