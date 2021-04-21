#include <iostream>
using namespace std;

int chis[10000];

int main () {
    int sum = 0;

    for (int i = 0; i < 10000; i++) {
        cin >> chis[i];
        if (chis[i] == 0) {
            break;
        } else if (chis[i] % 2 == 1) {
            sum = sum + chis[i];
        }
    }
    if (sum == 0) {
        cout << "-" << endl;
    } else {
        cout << sum << endl;
    }
    return 0;
}
