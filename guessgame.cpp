#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0)); // random number 

    int number = rand() % 100 + 1; // generate a random number between 1 and 100
    int guess;
    int tries = 0;

    cout << "GUESS THE NUMBER"<<endl;

    do {
        cout << "Enter a guess of number between 1 and 100 : ";
        cin >> guess;
        tries++;

        if (guess > number)
            cout << " Number Too high"<<endl;
        else if (guess < number)
            cout << " Number Too low"<<endl;

    } while (guess != number);

    cout << "\nCorrect! You got it in " << tries << " guesses!\n";

    return 0;
}
