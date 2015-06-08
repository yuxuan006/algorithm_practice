#include <iostream>
using namespace std;
//recursion
int binarySearch(int a[], int first, int last, int value){
    int index;
    if(first > last){
        index = -1;
    }
    int mid = (first+last)/2;
    
    if(a[mid] == value){
        cout<<"num: "<<a[mid]<<endl;
        index = mid;
    }
    else if(a[mid] > value){
        cout<<"num: "<<a[mid]<<endl;
        index = binarySearch(a, first, mid-1, value);
    }
    else{
        cout<<"num: "<<a[mid]<<endl;
        index = binarySearch(a, mid+1, last, value);
    }
    return index;
}
//iteration
int binarySearch(int nums[], int lower, int upper, int target){
    int index;
    int mid;
    while(lower <= upper){
        mid = (upper+lower)/2;
        //cout<<"mid"<<mid;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target){
            lower = mid + 1;
        }
        else if(nums[mid] > target){
            upper = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    //for(int i = 1; i <= 20; i++){
    // a[i-1] = i;
    //}
    //int a[] = {1,2,3,4,5,6};
    int num = binarySearch(a, 0, 19, 9);
    cout<<num<<endl;
    return 0;
}

