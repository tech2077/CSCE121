#include "std_lib_facilities_4.h"

int main() {
    string first_name, friend_name;
    char friend_sex;
    int age;

    cout << "Enter the name of the person you want to write to: ";
    cin >> first_name;
    cout << "Dear "  << first_name << endl;

    cout << "\t" << "How are you? I am fine. I miss you." << endl;

    cout << "Enter the name of another friend: ";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?" << endl;

    cout << "Enter (m/f) for friend's sex: ";
    cin >> friend_sex;

    cout << "If you see " << friend_name << " please ask " << (friend_sex == 'm' ? "him" : "her") << " to call me." << endl;

    cout << "Enter age for friend: ";
    cin >> age;

    if(age <= 0 || age > 110)
        error("You're kidding");

    cout << "I hear you just had a birthday and you are " << age << " years old." << endl;

    if(age < 12)
        cout << "Next year you'll be " << age+1 << "." << endl;
    else if(age == 17)
        cout << "Next year you'll be able to vote." << endl;
    else if(age > 70)
        cout << "I hope you are enjoying retirement." << endl;

    cout << "Yours sincerely," << "\n\n" << "Matthew" << endl;

    return 0;
}