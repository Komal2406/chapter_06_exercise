#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

long double mstold(string moneyStr){
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

int main(){
    string userInput;
    char choice;

    do
    {
        cout<<"Enter  the money: ";
        cin>>userInput;
        long double result = mstold(userInput);         //use the function to convert the string into double

        cout<<"The equivalent long double value is: "<<fixed<<result<<endl;

        cout<<"Do you want another(y/n)? ";
        cin>>choice;
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}