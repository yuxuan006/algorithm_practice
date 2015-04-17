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
    string s;
    while(x > 0){
        int n = x%10;
        s += n + '0';
        x = x/10;
    }
    return s;
}