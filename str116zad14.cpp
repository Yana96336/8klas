//str 116/zad 14

#include <iostream>
using namespace std;

int main () {
int n, br=0;
cin >> n;
if (n<3 or n>29) {
    cin >> n;
}
int a[n];
for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i]%2==0) {
        br++;
    }
}
cout << br << endl;
return 0;
}
