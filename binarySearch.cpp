#include <iostream>
using namespace std
int binarySearch(int a[], int first, int last, int value){
    int mid = (first+last)/2;
    
    if(a[mid] == value){
        return mid;
    }
    else{
        if(a[mid] < value){
            mid = binarySearch(a, 0, mid-1, value);
        }
        else{
            mid = binarySearch(a, mid+1, last, value);
        }
    }
}
int main()
{
    int a[] = {1,2,3};
    int num = binarySearch(a, 0, 2, 2);
    cout<<num<<endl;
    return 0;
}