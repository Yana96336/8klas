//str 116/zad 16

#include <iostream>
using namespace std;

int main () {
int n, sum=1;
cin >> n;
if (n<3 or n>39) {
    cin >> n;
}
int a[n];
for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i]%7==0) {
        sum=sum*a[i];
    }
}
if (sum==1) {
    cout << "No" << endl;
    return 0;
} else {
cout << sum << endl;
return 0;
}
}
