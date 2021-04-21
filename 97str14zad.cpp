///kazva dali sumata na 3-cfr 4islo e = prosto      казва дали сумата на 3-цфр число е = просто число
//str 97/zad 14

#include <iostream>
#include <cmath>

using namespace std;

int SumCfr (int cfr) {
    int sbora = 0;
    while (cfr!=0) {
        sbora = sbora + (cfr % 10);
    }
    return sbora;
}

bool ProstoChislo (int chsl){
    bool dali;
    if(chsl == 1){
        dali = false;
    }
    else {
        if(chsl == 2 || chsl == 3){
        dali = true;
        }
        else {
            for(int i = 2; i <= sqrt(chsl); i++){
                dali = true;
                if(chsl % i == 0){
                dali = false;
                break;
                }
            }
        }
    }
    return dali;
}

int main () {
    for (int i = 100; i < 1000; i++) {
        if (ProstoChislo(SumCfr(i)) == true) {
            cout << i << endl;
        }
    }
    return 0;
}
