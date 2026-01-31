#include <iostream>
#include <cstdlib>
#include <numeric>   // for std::gcd

using namespace std;

class fraction
{
private:
    int numerator;
    int denominator;

public:
    fraction() : numerator(0), denominator(1)
    {
    }
    fraction(int n, int d) : numerator(n), denominator(d)
    {
    }
    void data(){
        char char1 = '/';
cout << "Enter fraction: ";
    cin >> numerator >> char1 >> denominator;
    }

    // void lowterms()
    // {
    //     int g = gcd(abs(numerator), abs(denominator));
    //     numerator /= g;
    //     denominator /= g;
    // }

    // Euclidean algorithm to reduce fraction to lowest terms
    void lowterms(){
    int tnum, tden, temp, gcd;

    tnum = labs(numerator);     //absolute value of numerator
    tden = labs(denominator);      //absolute value of denominator
    if (tden == 0)
    {
        cout << "Illegal fraction: divison by 0";
        exit(1);
    }
    else if (tnum == 0)
    {
        numerator = 0;
        denominator = 1;
        return;
    }
    while (tnum != 0)
    {
        if (tnum < tden)
        {
            temp = tnum;
            tnum = tden;
            tden = temp;
        }
        tnum = tnum - tden;
    }
    gcd = tden;
    numerator = numerator / gcd;
    denominator = denominator / gcd;
}


    // Display function
void display(){
    cout<<"Fraction is "<<numerator << '/' << denominator;
}
// Overloaded + operator to add two fractions
fraction operator+(const fraction& other) const
{
    int n = numerator * other.denominator + other.numerator * denominator;
    int d = denominator * other.denominator;
    fraction temp(n, d);
    temp.lowterms();
    return temp;
}

// Fraction / int
    fraction operator/(int value) const
    {
        return fraction(numerator, denominator * value);
    }

};
int main()
{
    const int SIZE = 4;
    fraction frac[SIZE];
    fraction total;

    //  Input fractions
    for (int i = 0; i < SIZE; i++)
    {
        frac[i].data();
    }

    //calculate total
    for (int j = 0; j < SIZE; j++)
    {
        total = total + frac[j];
    }

     // Average = total / SIZE
    fraction avg = total / SIZE;

    cout << "\nAverage = ";
    avg.display();
}

