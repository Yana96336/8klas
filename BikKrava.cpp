#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int UL = 9999, DL = 1000;
    srand(time(0));
    int num = rand() % (UL - DL + 1) + DL;
    //cout << num << endl;

    int bik = 0, krava = 0, n = 0, g = 0;
    int guess = 0;

    n = num, g = guess;
    int n1, n2, n3, n4, g1, g2, g3, g4;
    n1 = n%10; n2 = (n/10)%10; n3 = (n/100)%10; n4 = (n/1000)%10;
    g1 = g%10; g2 = (g/10)%10; g3 = (g/100)%10; g4 = (g/1000)%10;

    while (n1 == n2 or n1 == n3 or n1 == n4 or n2 == n3 or n2 == n4 or n3 == n4) {
         srand(time(0));
        int num = rand() % (UL - DL + 1) + DL;
    }


    do {
        cout << "Enter a 4-digit number: ";
        cin >> guess;
        cout << endl;

        if (guess == 10) { cout << num << endl; } else {

        bik = 0; krava = 0, n = num, g = guess;
        g1 = g%10; g2 = (g/10)%10; g3 = (g/100)%10; g4 = (g/1000)%10;
        n1 = n%10; n2 = (n/10)%10; n3 = (n/100)%10; n4 = (n/1000)%10;

         while (g1 == g2 or g1 == g3 or g1 == g4 or g2 == g3 or g2 == g4 or g3 == g4) {
            cout << "Enter a 4-digit number: ";
            cin >> guess;
            cout << endl;
         }

        if (n%10 == g%10) { bik++; n1 = -1; g1 = -2; }
        n=n/10;     g=g/10;
        if (n%10 == g%10) { bik++; n2 = -1; g2 = -2; }
        n=n/10;     g=g/10;
        if (n%10 == g%10) { bik++; n3 = -1; g3 = -2; }
        n=n/10;     g=g/10;
        if (n%10 == g%10) { bik++; n4 = -1; g4 = -2; }
        cout << "Bulls: " << bik << endl;

        n = num, g = guess;

        for (int i = 0; i < 1; i++) {
            g1 = g%10; g2 = (g/10)%10; g3 = (g/100)%10; g4 = (g/1000)%10;

            if ((n1 == g2 or n1 == g3 or n1 == g4)) { //n>9999
                krava++;
            }
            if ( (n2 == g%10 or n2 == g3 or n2 == g4)) {
                krava++;
            }
            if ( (n3 == g%10 or n3 == g2 or n3 == g4)) {
                krava++;
            }
            if ( (n4 == g%10 or n4 == g2 or n4 == g3)) {
                krava++;
            }
            //if (g1 == g2) { krava--; }
            //if (g1 == g3) { krava--; }
            //if (g1 == g4) { krava--; }
            //if (g2 == g3) { krava--; }
            //if (g2 == g4) { krava--; }
            //if (g3 == g4) { krava--; }
        }
        cout << "Cows: " << krava << endl;
    } }
    while (guess != num);
    cout << "You guessed the number! Congratulations!" << endl;
}
