///vyvejdash data i ti dava sledvashtata
//str 83/zad 9

#include <iostream>
using namespace std;

int main () {
    int den, mesec, year;
    cin >> den >> mesec >> year;

    if (den > 31) {
        cout << "Ne raboti\n";
        return 0;
    }

    switch (mesec) {
    case 1 : if (den == 31) {cout << "01.02." << year;} else {cout << den+1 << "." << mesec << "." << year;}; break;
    case 2 : if (year%4 == 0 && den == 29) {cout << "01.03." << year;} else if (year%4 == 0 && den == 28) { cout << 29 << "." << mesec << "." << year; } else if (year%4 != 0 && den == 28) {cout << "01.03." << year;}
            else {cout << den+1 << "." << mesec << "." << year;}; break;
    case 3 : if (den == 31) {cout << "01.04." << year;} else {cout << den+1 << "." << mesec << "." << year;}; break;
    case 4 : if (den == 30) {cout << "01.05." << year;} else {cout << den+1 << "." << mesec << "." << year;}; break;
    case 5 : if (den == 31) {cout << "01.06." << year;} else {cout << den+1 << "." << mesec << "." << year;}; break;
    case 6 : if (den == 30) {cout << "01.07." << year;} else {cout << den+1 << "." << mesec << "." << year;}; break;
    case 7 : if (den == 31) {cout << "01.08." << year;} else {cout << den+1 << "." << mesec << "." << year;}; break;
    case 8 : if (den == 31) {cout << "01.09." << year;} else {cout << den+1 << "." << mesec << "." << year;}; break;
    case 9 : if (den == 30) {cout << "01.10." << year;} else {cout << den+1 << "." << mesec << "." << year;}; break;
    case 10 : if (den == 31) {cout << "01.11." << year;} else {cout << den+1 << "." << mesec << "." << year;}; break;
    case 11 : if (den == 30) {cout << "01.12." << year;} else {cout << den+1 << "." << mesec << "." << year;}; break;
    case 12 : if (den == 31) {cout << "01.11." << year+1;} else {cout << den+1 << "." << mesec << "." << year;}; break;
    default : cout << "Ne raboti\n";
    }
    cout << endl << endl;
    return 0;
}
