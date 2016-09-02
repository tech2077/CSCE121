//Matthew Skolaut
//CSCE 121-507
//Due: September 8, 2016
//hw1pr4.cpp

#include "std_lib_facilities_4.h"

int main()
{
    auto x = 1;

    for(int i = 0; i < 11; i++)
    {
        auto x2 = x * x;
        auto y = sqrt(x2);
        cout << "square root of (" << x << " squared) is " << x2 << "\n";

        x *= 10;
    }
    
    cout << "\n\n";
    cout << "This program produced some strange values since the compiler assumed auto to be int" \
         << "as opposed to long since int was all that was required to fit 1, and could not predict" \
         << "runtime behavior of it overflowing and corrupting the variable\n";

    return 0;
}
