#include <iostream>
using namespace std;
int main() {
    int score=0,answer;
    cout << "Welcome to the Quiz!\n";
    cout << "\n1. What is 5+5?";
    cout << "\n1. 6";
    cout << "\n2. 8";
    cout << "\n3. 10";
    cout << "\nEnter answer: ";
    cin >> answer;
    if (answer == 2) {
        score++;
    }
    cout << "\n2. Which is the capital of India?";
    cout << "\n1. Mumbai";
    cout << "\n2. New Delhi";
    cout << "\n3. Chennai";
    cout << "\nEnter answer: ";
    cin >> answer;
    if (answer == 2) {
        score++;
    }
    cout << "\n3. Which planet is known as Red Planet?";
    cout << "\n1. Earth";
    cout << "\n2. Mars";
    cout << "\n3. Jupiter";
    cout << "\nEnter answer: ";
    cin >> answer;
    if (answer == 2) {
        score++;
    }
    cout << "\nYour score is: " << score << " out of 3";
    return 0;
}