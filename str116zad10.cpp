///wywevdame duma i prebroqwa a-tata
//str 116/zad 10

#include <iostream>
using namespace std;

int main () {
    char duma[100000];
    cin >> duma;
    char simvol = 'a';
    int br=0;

    for(i = 0; duma[i]; i++) {
        if (simvol == duma[i])
        br++;
    }
    cout<< br << endl;

return 0;
}
