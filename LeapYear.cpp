#include <iostream>
using namespace std;

int main () {
    int year;
    cout << "enter number of year to see if it is leap year: ";
    cin >> year;
    cout << endl;
    if (year%400 == 0 or (year%4 == 0 and year%100!=0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
