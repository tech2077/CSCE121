#include "std_lib_facilities_4.h"

using namespace std;

int main()
{
    double a, b;
    String a_unit, b_unit;
    vector<double> values;
    double tolerance = 1.0 / 10000000;

    while (cin >> a >> a_unit >> b >> b_unit) {
        double cvt_a, cvt_b;

        if (a_unit == "m") {
            cvt_a = 1;
        } else if (a_unit == "cm") {
            cvt_a = 100;
        } else if (a_unit == "in") {
            cvt_a = 0.0254;
        } else if (a_unit == "ft") {
            cvt_a = 0.3048;
        } else {
            cvt_a = -1;
        }
        if (b_unit == "m") {
            cvt_b = 1;
        } else if (a_unit == "cm") {
            cvt_b = 100;
        } else if (a_unit == "in") {
            cvt_b = 0.0254;
        } else if (a_unit == "ft") {
            cvt_b = 0.3048;
        } else {
            cvt_b = -1;
        }

        a = a * cvt_a;
        b = b * cvt_b;

        if (a > 0 && b > 0) {
            double diff = abs(a - b);
            if (diff > 0) {
                if (a > b) {
                    double tmp = a;
                    a = b;
                    b = tmp;
                }

                cout << "the smaller value is: " << a << "m ";
                cout << "the larger value is: " << b << "m" << endl;

                if (diff <= tolerance)
                    cout << "the numbers are almost equal" << endl;
            } else {
                cout << "the numbers are equal" << endl;
            }

            
        }
    }
    return 0;
}
