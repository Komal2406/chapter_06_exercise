#include <iostream>
#include<cstdlib>
#include<string>
#include <iomanip>

using namespace std;

class bMoney{
private:
    long double money;
public:
    bMoney() {
        money = 0.0;
    };
    bMoney(char s[] )       //constructor to initialize money from string
     { money = mstold(s); }

    static long double mstold(string moneyStr){
    string cleanedStr = "";
    
    for (int i = 0; i < moneyStr.length(); i++)
    {
        if ((moneyStr[i]>= '0' && moneyStr[i]<= '9') || moneyStr[i] == '.')     //check condition if user enter the digits or decimal
        {
            cleanedStr += moneyStr[i];      //Add digits or decimal to string
        }
        
    }
    return stold(cleanedStr);       //convert string to long double
}
    void madd(const bMoney m1, const bMoney m2)
    {
        money = m1.money + m2.money;
    }
    void getMoney()
    {
        cout<<"Enter  the money: ";
        string userInput;
        getline(cin, userInput);
        money = mstold(userInput);         //use the function to convert the string into double
    }
    void putMoney()
    {
       cout<<"The equivalent long double value is: "<<fixed<<setprecision(2)<<money<<endl;
    }
};

int main(){
    bMoney m1, m2, sum;
    m1.getMoney();
    m2.getMoney();
    sum.madd(m1,m2);
    sum.putMoney();
    return 0;
}