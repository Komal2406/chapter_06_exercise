#include<iostream>
#include<cstdlib>
using namespace std;

const int SIZE = 10;

class Array{
private:
    int n;      //number of elements in the array
    int arr[SIZE];
    
public:
 void getData(){
    cout<<"Enter the number of elements in the array (max "<<SIZE-1<<"): ";
    cin>>n;
   for (int i = 0; i < n; i++)
    {
        cout<<"Enter array element "<<i+1<<": ";
        cin>>arr[i];
    }
    
}
int giveMax(){
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
    return max;
}

int giveMin(){
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min =  arr[i];
        }
        
    }
    return min;
    
}

int sum(){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int Avg(){
    int sum = 0;
    int avg = 0;
     for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
 avg = sum/ n;
    return avg;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void reverse(){
    for (int i = 0; i < n/2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
    
}
void display(){
    cout<<"Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};

int main(){
    Array a1;
    
    a1.getData();
    cout<<"Maximum element in the array is: "<<a1.giveMax()<<endl;
    cout<<"Minimum element in the array is: "<<a1.giveMin()<<endl;
    cout<<"Sum of the elements in the array is: "<<a1.sum()<<endl;
    cout<<"Average of the elements in the array is: "<<a1.Avg()<<endl;
    a1.reverse();
    a1.display();
    return 0;
}