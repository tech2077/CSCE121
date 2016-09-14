#include "std_lib_facilities_4.h"

double ctok(double c)
{
    double k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;
    cin >> c;
    if(c < -273.15) {
        error("Temperature outside acceptable range");
    } else {
        double k = ctok(c);
        cout << setprecision(3) << k << endl;
    }
    return 0;
}
