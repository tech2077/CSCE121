#include "std_lib_facilities_4.h"

int main(int argv, char **argc)
{
    for(int i = 0; i < 26; i++)
        cout << char('a' + i) << "\t" << int('a' + i) << endl;
    
    return 0;
}
