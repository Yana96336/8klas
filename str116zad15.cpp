//str 116/zad 15

#include <iostream>
using namespace std;

int main () {
int n, sa=0;
cin >> n;
if (n<3 or n>24) {
    cin >> n;
}
double a[n];
for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i]>0) {
        sa=sa+a[i];
    }
}
double g=sa/n;
cout << g << endl;
return 0;
}
