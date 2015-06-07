//convert int array to string

string int_array_to_string(int a[], int size)
{
    string s;
    for (int i = 0; i < size; ++i) {
        s += to_string(a[i]);
    }
    return s;
}

//convert int to string(not using to_string())

#include <string>
using namespace std;
string inttostring(int n){
    string ret = "";
    int i = 0, x;
    int flag = 1;
    if(n < 0){
        flag = -1;
        n *= -1;
    }
    while(n > 0){
        x = n % 10;
        ret.insert(0, 1, x + '0');
        n = n/10;
    }
    if(flag == -1){
        ret.insert(0, 1, '-');
        return ret;
    }
    return ret;
}
using namespace std;

int main()
{
    int i = -124;
    string s = inttostring(i);
    cout <<s<< endl;
    
    return 0;
}