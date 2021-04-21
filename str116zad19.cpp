//str 116/zad 19

#include <iostream>
using namespace std;

int main () {
int n;
cin >> n;
if (n<2 || n>125) {
    cin >> n;
}
int arr[n];
for (int i=0; i<n; i++){
    cin >> arr[i];
}
for (int i=0; i<n; i++){
    for (int j = 0; j < n; j++) {
        if (arr[j]>arr[j+1]){
            swap (arr[j],arr[j+1]);
        }
    }
}
for (int i=0; i<n; i++){
    cout << arr[i] << " ";
}
cout << endl;
return 0;
}
