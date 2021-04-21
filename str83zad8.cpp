///kazva kolko dni ima daden mesec ot dadena godina
//str 83/zad 8

#include <iostream>
using namespace std;

int main () {
    int mesec, godina;
    cin >> mesec >> godina;
    switch (mesec) {
    case 1 : cout << "31\n";break;
    case 1+1 : if (godina%4 == 0) { cout << "29\n"; } else { cout << "28/n"; };break;
    case 1*3 : cout << "31";break;
    case 4 : cout << "30";break;
    case 5 : cout << "31";break;
    case 6 : cout << "30";break;
    case 7 : cout << "31";break;
    case 8 : cout << "31";break;
    case 9 : cout << "30";break;
    case 10 : cout << "31";break;
    case 11 : cout << "30";break;
    case 12 : cout << "31";break;
    default : cout << "Ne raboti\n";
    }
    cout << endl;
    return 0;
}
