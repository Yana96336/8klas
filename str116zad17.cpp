//str 116/zad 17

#include <iostream>
using namespace std;

int main () {
int n, chislo, index=-1;
cin >> n;
if (n<2 or n>100) {
    cin >> n;
}
int a[n];
cin >> a[0];
    chislo = a[0];
    index = 0;
for (int i = 1; i < n; i++) {
    cin >> a[i];
    if (a[i]>a[0]) {
        chislo = a[i];
        index = i;
    }
}
cout << chislo << "   " << index << endl;
return 0;
}
