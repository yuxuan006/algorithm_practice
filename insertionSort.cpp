#include <iostream>

using namespace std;
void insertion_sort (int a[], int n){
    for(int i = 1; i < n; i++){
        int j = i;
        while(j>0 && a[j] < a[j-1]){
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[] = {2,4,1,5,2};
    insertion_sort(a, 5);
    return 0;
}