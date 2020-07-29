#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName, studentStatus, freshman, sophomore, junior, senior;
    int graduationYear, currentYear, yearsLeft;

    cout << "Please enter your name: ";
    cin >> firstName;
    cout << "Please enter your graduation year: ";
    cin >> graduationYear;

    // The user must enter a valid current year, e.g if the graduation year is 2016
    // but they put their current year down as 2010 that would compute as an invalid range.
    do
    {
        cout << "Please enter current year: ";
        cin >> currentYear;
    } while (graduationYear - currentYear > 4);

    yearsLeft = graduationYear - currentYear;
    switch (yearsLeft)
    {
        case 0:
            studentStatus = "graduated";
            break;
        case 1:
            studentStatus = "senior";
            break;
        case 2:
            studentStatus = "junior";
            break;
        case 3:
            studentStatus = "sophomore";
            break;
        case 4:
            studentStatus = "freshman";
            break;
    }

    cout << firstName << ", " << " you are a " << studentStatus << "." << endl;
    return 0;
}