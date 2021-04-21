/// 4-צפנ קטסכא סתס סבמנ מע צטפנטעו = 2-צפנ
// 97 str/12 zad

#include <iostream>
using namespace std;

int SumCfr (int cfr) {
    int sbora = 0;
    while (cfr!=0) {
        sbora = sbora + (cfr % 10);
    }
    return sbora;
}

int main () {
    int a;
    cout << "vyvedete 4islo za test" << endl;
    cin >> a;
    cout << "sumata ot cifirte na a e " << SumCfr(a) << "ako ne - az sym profesionalen idiot (:" << endl;
    for (int i = 1000; i < 10000; i++) {
        if (SumCfr(i) >= 10 && SumCfr(i) <= 20) {
            cout << i << endl;
        }
    }
    return 0;
}
