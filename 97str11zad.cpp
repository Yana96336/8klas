///3-cfr: proverqva dali cifrite mu go delqt (bez 0)     3-цфр число: проверява дали цифрите му го делят (без 0)
// str 97/zad 11

#include <iostream>
using namespace std;

bool Kratno (int chsl) {
//    if (chsl<100 || chsl>999) {
//      Kratno = false;
//    }
    if (chsl % 10 == 0) {
        Kratno = false;
    } else if ((chsl/10) % 10 == 0) {
      Kratno = false;
    }
    if (chsl % (chsl%10) == 0 && chsl % ((chsl/10)%10) && chsl % ((chsl/100)%10)) {
        Kratno = true;
    } else {
        Kratno = false;
    }
    return chsl;
}

int main () {
    int a;
    cout << "enter number" << endl;
    cin >> a;
    cout << Kratno(a) << endl;
    for (int i = 100; i < 1000; i++) {
        if (Kratno(i) == true) {
            cout << i << endl;
        }
    }
    return 0;
}
