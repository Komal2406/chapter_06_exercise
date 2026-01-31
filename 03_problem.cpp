#include <iostream>
#include <string.h>
using namespace std;

int maxint(int *arr, int size){
    int maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
        
    }
    return maxIndex;
}
int main()
{
    int n;
    cout<<"Enter the number of integers: ";
    cin>>n;
    int *arr = new int;
    cout<<"Enter the integers: ";
    for (int j = 0; j < n; j++)
    {
        cin>>arr[j];
    }
    int maxIndex = maxint(arr, n);
    cout<<"The largest element is "<<arr[maxIndex]<<" at index "<<maxIndex<<endl;
    delete[] arr;
    return 0;
}
