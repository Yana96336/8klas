/// m<n i proverqva dali 4islata m/u m i n se delqt na 5
//str 97/zad 10

#include <iostream>
using namespace std;

int main () {
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (i%5 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
