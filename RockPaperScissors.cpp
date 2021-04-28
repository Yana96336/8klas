#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "Rock-paper-scissors game" << endl << endl;

    srand(time(0));
    int comp = rand() % 3 + 1;

    int guest;
    cout << "Choose: for scissors press 1, for rock - 2, for paper - 3: ";
    cin >> guest;
    cout << endl;

    //scissors (1), rock (2), paper (3):

    if (comp == 1) {
        cout << "I chose scissors. You chose ";
        if (guest == 1) {
            cout << "scissors. This is a draw!" << endl;
        } else if (guest == 2) {
            cout << "rock. You win!" << endl;
        } else if (guest == 3) {
            cout << "paper. You lose!" << endl;
        }
    } else if (comp == 2) {
        cout << "I chose rock. You chose ";
        if (guest == 1) {
            cout << "scissors. You lose!" << endl;
        } else if (guest == 2) {
            cout << "rock. This is a draw!" << endl;
        } else if (guest == 3) {
            cout << "paper. You win!" << endl;
        }
    } else if (comp == 3) {
        cout << "I chose paper. You chose ";
        if (guest == 1) {
            cout << "scissors. You win!" << endl;
        } else if (guest == 2) {
            cout << "rock. You lose!" << endl;
        } else if (guest == 3) {
            cout << "paper. This is a draw!" << endl;
        }
    }

    return 0;
}
