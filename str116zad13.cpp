//str 116/zad 13

#include <iostream>
using namespace std;

int main () {
int n;
int k=0;
cin >> n;
if (n<1 || n>36) {
    cout << "-" << endl;
    return 0;
}
int arr[n];
for (int i=0; i<n; i++){
    cin >> arr[i];
}
int x;
cin >> x;
for (int i=0; i<n; i++){
    if (arr[i] == x) {
        cout << i+1 << endl;
        break;
    } else {
        k++;
    }
    if (k==n) {
        cout << "-" << endl;
    }
}
return 0;
}
