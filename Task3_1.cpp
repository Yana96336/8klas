#include <iostream>
using namespace std;

int main () {

double sum[14];
sum[0] = 10000;

for (int i = 1; i < 14; i++) {
    sum[i] = (sum[i-1] * 106) / 100;
}
cout << "Price: " << sum[13] + sum[12] + sum[11] + sum[10] << "$" << endl;
}
