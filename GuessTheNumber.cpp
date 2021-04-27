#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "Guess My Number Game\n\n";

    int UL, DL;
    cout << "Enter upper limit (must be a natural number):";
    cin >> UL;
    cout << endl;
    cout << "Enter down limit (must be a natural number):";
    cin >> DL;
    cout << endl;

    int counter = 1;
    int circles = 0;
    int hint = 0;
    int a[10];
         a[0]=1, a[1]=0, a[2]=0, a[3]=0, a[4]=0, a[5]=0, a[6]=1, a[7]=0, a[8]=2, a[9]=1;

    srand(time(0)); //seed random number generator
    int num = rand() % (UL - DL) + DL; // random number between UL and DL


    int n = num;
    while (n > 10) {
        if (n%10 == 0 or n%10 == 6 or n%10 == 9) {
            circles++;
        } else if (n%10 == 8) {
            circles = circles+2;
        }
        n = n/10;
    }
    if (n%10 == 0 or n%10 == 6 or n%10 == 9) {
            circles++;
        } else if (n%10 == 8) {
            circles = circles+2;
        }


    int guess = 0;
    while (guess != num) {
        if (counter == 6) {
            cout << "Do you want a hint? If yes, press 1. If no, press 2: ";
            cin >> hint;
            if (hint == 1) {
                cout << "The number has " << circles << " circles in it." << endl;
            }
        }

        cout << "Enter a guess between " << UL << " and " << DL <<" (if you want to end the game, press 0): ";
        cin >> guess;

        if (guess == 0) {
            cout << "You ended the game. The answer was " << num << endl;
            break;
        } else if (guess > num) {
            cout << "Too high!\n\n";
            counter++;
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n";
                counter++;
            }
        else {
            cout << "\nCorrect! You got it in " << counter << " attempts." << endl;
        }
    }

    cout << endl;
    return 0;
}
