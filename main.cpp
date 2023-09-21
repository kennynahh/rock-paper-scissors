#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int computer_score = 0, user_score = 0, winning_score = 3;
    string computer_choice_1 = "rock", computer_choice_2 = "paper",
            computer_choice_3 = "scissors", computer_choice, playerChoice;
    srand(time(0));
    cout << "Welcome to rock, paper, scissors!" << endl;
    while ((computer_score + user_score) < (2 * winning_score - 1)) {
        int random = rand() % 3;
        if (random == 0)
            computer_choice = computer_choice_1;
        else if (random == 1)
            computer_choice = computer_choice_2;
        else
            computer_choice = computer_choice_3;

        cout << endl << "Your score: " << user_score << endl;
        cout << "Computer's score: " << computer_score << endl << endl;
        cout << "Enter your choice of either: rock, paper, or scissors.\n";
        cin >> playerChoice;
        while (playerChoice != "rock" && playerChoice != "scissors" && playerChoice != "paper") {
            cout << "Incorrect syntax for your choice! Please try to write your choice again in lowercase with no spaces." << endl;
            cin >> playerChoice;
        }

        if (computer_choice == "rock" && playerChoice == "paper") {
            user_score++;
            cout << "You played paper while the computer played rock! You gain one point.\n";
        } else if (computer_choice == "rock" && playerChoice == "rock") {
            cout << "Both you and the computer played rock! No one wins this round.\n";
        } else if (computer_choice == "rock" && playerChoice == "scissors") {
            computer_score++;
            cout << "You played scissors while the computer played rock! The computer gains one point.\n";
        } else if (computer_choice == "paper" && playerChoice == "rock") {
            computer_score++;
            cout << "You played rock while the computer played paper! The computer gains one point.\n";
        } else if (computer_choice == "paper" && playerChoice == "paper") {
            cout << "Both you and the computer played paper! No one wins this round.\n";
        } else if (computer_choice == "paper" && playerChoice == "scissors") {
            user_score++;
            cout << "You played scissors while the computer played paper! You gain one point.\n";
        } else if (computer_choice == "scissors" && playerChoice == "rock") {
            user_score++;
            cout << "You played rock while the computer played scissors! You gain one point.\n";
        } else if (computer_choice == "scissors" && playerChoice == "paper") {
            computer_score++;
            cout << "You played paper while the computer played scissors! The computer gains one point.\n";
        } else if (computer_choice == "scissors" && playerChoice == "scissors") {
            cout << "Both you and the computer played scissors! No one wins this round.\n";
        }
    }
    if (computer_score == winning_score) {
        cout << "The computer wins!" << endl;
    } else if (user_score == winning_score) {
        cout << "The player wins!" << endl;
    }
    cout << "Final Scores" << endl;
    cout << "---------------" << endl;
    cout << "Your score: " << user_score << endl;
    cout << "Computer's score: " << computer_score << endl << endl;
    return 0;
}
