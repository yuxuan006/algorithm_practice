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

string int_to_string(int x){
    string st;
    if(x == 0)return "0";
    while(x > 0){
        int n = x%10;
        st += n + '0';
        x = x/10;
    }
    return st;
}