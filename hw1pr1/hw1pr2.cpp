//Matthew Skolaut
//CSCE 121-507
//Due: September 8, 2016
//hw1pr2.cpp

#include "std_lib_facilities_4.h"

int main()
{
    float a, b;
    char op;

    while(cin >> a >> op >> b)
    {
        float res = 0;
        if(op == '+')
        {
            res = a + b;
        }
        else if(op == '-')
        {
            res = a - b;
        }
        else if(op == '*')
        {
            res = a * b;
        }
        else if(op == '/')
        {
            res = a / b;
        }

        cout << res << "\n";
    }

    return 0;
}