#include <iostream>
using namespace std;

int main () {

int lines, j;
cout << "Enter the number of lines (number between 5 and 15): ";
cin >> lines;
cout << endl;

for (int i = lines; i != 0; i--){
    for (j = i; j != 0; j--) {
        cout << j << " ";
    }
    j = 2;
    while (j <= i) {
        cout << j << " ";
        j++;
    }
    cout << endl;
}

return 0;
}
