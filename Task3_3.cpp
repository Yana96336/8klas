#include <iostream>
using namespace std;

int main () {

int lines, j, k;
cout << "Enter the number of lines (number between 5 and 15): ";
cin >> lines;
cout << endl;

for (int i = lines; i != 0; i--){
   j = i;
   k = i;
   if (j < lines) {
    while (j != lines) {
        cout << "  ";
        j++;   }
   }
        while (k != 0) {
            cout << "* ";
            k--;   }

   cout << endl;
}

return 0;
}
