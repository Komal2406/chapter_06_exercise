#include <iostream>
using namespace std;

// the parameters are address of an array and number of elements
int maxint(int *arr, int num)
{
    int max_val = arr[0];
    int max_index = 0;
    for (int i = 1; i < num; ++i)
    {
        if (arr[i] > max_val) // for compairing the array index to max value
        {
            max_val = arr[i]; // if true the value of that array element gets into max value
            max_index = i;
        }
    }
    return max_index;
}

int main()
{
    int num_elements; // number of elements in array

    const int MAX_SIZE = 100;
    int numbers[MAX_SIZE]; // Statically allocate a large array on stack

    cout << "Enter the number of integers :";
    cin >> num_elements;

    for (int i = 0; i < num_elements; ++i)
    {
        cout << "Enter integers " << i  << ": ";
        cin >> numbers[i]; // taking the array elements
    }

    int largest_index = maxint(numbers, num_elements); // call the function and put in inside largest_index
    cout << "The largest element is: " << numbers[largest_index] << endl;
    cout << "Its index number is: " << largest_index << endl;
    return 0;
}
