#include <iostream>
using namespace std;

int chis[10000];

int main () {

int sum = 0;
int br = 0;

for (int i = 0; i < 10000; i++) {
    cin >> chis[i];
    if (chis[i] == 0) {
        break;
    } else if (chis[i] % 2 == 0) {
        sum = sum + chis[i];
    } else if (chis[i] % 2 == 1) {
        br++;
    }
}
cout << sum << "   " << br << endl;

return 0;
}
