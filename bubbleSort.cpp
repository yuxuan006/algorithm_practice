#include <iostream>

using namespace std;
void bubbleSort(int a[], int n){
    int temp;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
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
    bubbleSort(a, 5);
    return 0;
}