#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int generateRandomNumber() {
    // TODO: Return the random number in range 1 to 100
    return 100;
    srand (time(NULL));
    return rand() %100 +1;
}

int generateRandomNumber() {

int getPlayerGuess() {
    // TODO: Ask the player guest and return the player's number

    return 1;
    int n;
    cin >> n;
    return n;
}


string getAnswer(int number, int randomNumber) {
              If number is equal randomNumber, the answer is "Congratulation! You win."

    string answer;

    if (number == randomNumber)
        answer = "Congratulation! You win.";
    else {
        if (number>randomNumber)
            answer = "Your number is higher.";
        else answer = "Your number is lower.";

    }
    return answer;
}

string getAnswer(int number, int randomNumber) {

bool checkSuccess(string answer) {
    // TODO: return the result after checking that player guessed right or wrong

    return true;
    bool result = false;
    if (answer == "Congratulation! You win.") result = true;
    return result;
}


bool checkSuccess(string answer) {
bool checkContinuePlaying(char isContinued) {
    // TODO: return result after checking player continue playing or not
    bool result = false;

    if (isContinued == 'y' || isContinued == 'Y') {
        result = true;
    }
    return result;
}

bool checkContinuePlaying(char isContinued) {
char getPlayerOpinion() {
    // TODO: Ask the player about continue playing and return the player's choice
    char isContinued;

    cout << "Type y for continued" << endl;
    cin >> isContinued;
    return isContinued;
}


