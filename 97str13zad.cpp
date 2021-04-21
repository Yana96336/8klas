///4-cfr: ima li dve ravni cfr
//str 97/ zad 13

#include <iostream>
using namespace std;

bool RavniCfr (int chsl) {
    int cfr[3];

    cfr[0] = chsl%10;
    chsl = chsl/10;
    cfr[1] = chsl%10;
    chsl = chsl/10;
    cfr[2] = chsl%10;
    chsl = chsl/10;
    cfr[3] = chsl%10;
    chsl = chsl/10;

    if (cfr[0] == cfr[1] || cfr[0] == cfr[2] || cfr[0] == cfr[3]) {
        RavniCfr = true;
    } else if (cfr[1] == cfr[2] || cfr[1] == cfr[3]) {
        RavniCfr = true;
    } else if (cfr[2] == cfr[3]) {
        RavniCfr = true;
    } else {
        RavniCfr = false;
    }
    return RavniCfr;
}

int main () {
    for (int i = 1000; i < 10000; i++) {
        if (RavniCfr(i) == true) {
            cout << i << endl;
        }
    }
    return 0;
}
