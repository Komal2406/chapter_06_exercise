#include<iostream>
#include<string.h>
using namespace std;

const int MAX = 100;

void reversit(char s[]){            //This will reverse the string
int len = strlen(s);
for (int i = 0; i < len/2; i++)
{
    char temp = s[i];               //first s[i]th character will held in temp
    s[i] = s[len - i- 1];           // then s[len - i- 1] willl held in s[i]
    s[len - i- 1] = temp;           // finally s[len - i- 1] is in temp
}

}

int main()
{
    char str[MAX];
    cout<<"Enter a string: "<<endl;
    cin.get(str, MAX);              //get function will take blanks as well

    reversit(str);                  //here no need to use str[] instead we can use str only

    cout<<"Your reversed string is: "<<str<<endl;
    return 0;
}
