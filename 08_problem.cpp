#include <iostream>

using namespace std;

const int SIZE = 10;
class safearray
{
private:
    int arr[SIZE];

public:
    void getData()
    {
        for (int i = 0; i < SIZE - 1; i++)
        {
            cout << "Enter array element" << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    void putel(int index, int value)        //It put the element at given index
    {
        if (index < 0 || index > SIZE)
        {
            cout << "Error: Index out of bound ";       //checks if index out of bound
            exit(1);        //Terminate program at error
        }
        arr[index] = value;
    }
    int getel(int index)        //get element function
    {
        if (index < 0 || index > SIZE)
        {
            cout << "Error: Index out of bound ";
            exit(1);
        }
        return arr[index];
    }
};

int main()
{
    safearray sa1;
    int temp = 1234;
    sa1.putel(7, temp);     //insert value of temp at 7 index
    temp = sa1.getel(7);    //obtain value from index 7
    cout << "Value at 7 index is: " << temp << endl;
    return 0;
}