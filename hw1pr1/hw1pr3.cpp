//Matthew Skolaut
//CSCE 121-507
//Due: September 8, 2016
//hw1pr3.cpp

#include "std_lib_facilities_4.h"

int main()
{
    int pennies, nickles, dimes, quarters;
    int half_dollars, dollars, total;

    cout << "Enter how many pennies you have:\n";
    cin >> pennies;
    cout << "Enter how many nickles you have:\n";
    cin >> nickles;
    cout << "Enter how many dimes you have:\n";
    cin >> dimes;
    cout << "Enter how many quarters you have:\n";
    cin >> quarters;
    cout << "Enter how many half dollars you have:\n";
    cin >> half_dollars;
    cout << "Enter how many dollar coins you have:\n";
    cin >> dollars;
    cout << "\n";

    cout << "You have " << pennies << " pennies.\n";
    cout << "You have " << nickles << " nickles.\n";
    cout << "You have " << dimes << " dimes.\n";
    cout << "You have " << quarters << " quarters.\n";
    cout << "You have " << half_dollars << " half dollars.\n";
    cout << "You have " << dollars << " dollar coins.\n";

    total = pennies + 5*nickles + 10*dimes + \
            25*quarters + 50*half_dollars + 100*dollars;

    cout << "\n" << "The value of all of your coins is " << total << " cents.";

    return 0;
}
