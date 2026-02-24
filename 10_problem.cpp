#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;

int SIZE = 10;
class matrix
{
private:
    int rows;
    int cols;
    int** data;     //2D array to hold matrix data
public:
    matrix(int r, int c) : rows(r), cols(c)
    {  if (rows > SIZE || cols > SIZE)
        {
            cout << "Error: Matrix size exceeds limit of "
                 << SIZE << "x" << SIZE << endl;
            exit(1);
        }

        // Allocate memory
        data = new int*[rows];
        for (int i = 0; i < rows; i++)
        {
            data[i] = new int[cols];
        }}
        ~matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] data[i];
        }
        delete[] data;
    }
    void getData(){
       for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> data[i][j];
            }
        }
    }

    void putel(int index1, int index2, int value)        //It put the element at given index
    {
        if (index1 < 0 || index1 >= rows || index2 < 0 || index2 >= cols)
        {
            cout << "Error: Index out of bound ";       //checks if index out of bound
            exit(1);        //Terminate program at error
        }
        data[index1][index2] = value;
    }
    int getel(int index1, int index2)        //get element function
    {
        if (index1 < 0 || index1 >= rows || index2 < 0 || index2 >= cols)
        {
            cout << "Error: Index out of bound ";
            exit(1);
        }
        return data[index1][index2];
    }
};
int main()
{
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
    matrix mat1(r, c);
    cout << "Enter matrix elements: ";
    mat1.getData();
    int temp = 1234;
    mat1.putel(0, 1, temp);     //insert value of temp at (2,3) index
    temp = mat1.getel(2, 3);    //obtain value from index (2,3)
    cout << "Value at (2,3) index is: " << temp << endl;
    return 0;
}