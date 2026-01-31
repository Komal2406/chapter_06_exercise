#include <iostream>
#include <string.h>
using namespace std;

const int MAX = 100;

class employee
{
private:
    char empName[MAX];
    long empNum;

public:
    void getdata()
    {
        cout << "Enter employee name: \n";
        cin.get(empName, MAX);
        cout << "Enter employee number: \n";
        cin >> empNum;
        cin.ignore(); // To clear the newline character from the input buffer
    }
    void showdata()
    {
        cout << "Employee name: " << empName << endl;
        cout << "Employee number: " << empNum << endl;
    }
};

int main()
{
    employee emp1, emp2;
    emp1.getdata();
    emp1.showdata();
    emp2.getdata();
    emp2.showdata();
    return 0;
}
