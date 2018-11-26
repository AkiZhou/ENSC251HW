/**
 * @file HW1_q1.cpp
 * @author Shengcong Zhou * @Date 2018.May.30
 * @version 1.0
 * @brief This program uses a class to perform the game rock paper scissors,
 *       the user will be playing with computer opponent
 *
*/
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others. I acknowledged that I have read and
// followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus. //
// _____ Shengcong Zhou ____ _____2018.May.30______________ //
// ____ 301336141 ______ //

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// Global variable
const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;
const int COMPUTER = 1;
const int USER = 2;
const int EVEN = 3;

/**
 * @brief This class defines computer and user choices of rock paper
 *        or scissors
 */
class Game
{
public:
    Game();

    // Accessor declarations
    int getComputerChoice();
    int getUserChoice();

    // Mutator declarations
    void setComputerChoice(int newComputerChoice);
    void setUserChoice(int newUserChoice);

    void promptChoice();
    int whoIsWinner();
    void displayWinner();

private:
    int computerChoice;
    int userChoice;
};


int main()
{
    // Object constructor mutator accessor driver program
    cout << "Testing object constructor, mutator, accessor\n";
    cout << "Creating test object\n";
    Game test;
    cout << "Testing constructor: result should be\n"
            "computerChoice = (any integer 1 to 3)\nuserChoice = 0\n";
    cout << endl << "Result:\ncomputerChoice = " << test.getComputerChoice()
         << endl << "userChoice = " << test.getUserChoice() << endl << endl;
    cout << "Testing mutator: result should be\n"
            "computerChoice = 1\nuserChoice = 1\n";
    cout << endl << "Result:\n";
    test.setComputerChoice(1);
    test.setUserChoice(1);
    cout << "computerChoice = "
         << test.getComputerChoice() << endl
         << "userChoice = " << test.getUserChoice() << endl << endl;

    // Function promptChoice driver program
    cout << "Testing function promptChoice: Input 0, -1, 4, d, ?, 2"
            "respectively, result should repeat 5 error messages\n";
    test.promptChoice();
    cout << endl;

    // Function whoIsWinner and displayWinner driver program
    cout << "Testing function displayWinner & whoIsWinner: result should be\n"
            "Computer chose rock\nUser wins\n";
    cout << endl << "Result:\n";
    test.displayWinner();
    cout << endl;

    cout << "Test driving completed\n" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";

    // Main program
    // Create object
    Game newGame;
    cout << "Hi, let's play Rock Paper Scissors\n";
    newGame.promptChoice();
    newGame.displayWinner();

    return 0;
}

// Constructor definition
Game::Game()
{
    // Initialize computerChoice to number between 1 to 3
    srand((unsigned int)time(0));
    computerChoice = rand() % 3 + 1;
    userChoice = 0;
}

/**
 * @brief Accessor functions return values stored in member variables
 *
 * @return member variable
 */
int Game::getComputerChoice()
{
    return computerChoice;
}
int Game::getUserChoice()
{
    return userChoice;
}

/**
 * @brief Mutator functions changes values stored in member variables
 *
 * @param newInput
 * @return void
 */
void Game::setComputerChoice(int newComputerChoice)
{
    computerChoice = newComputerChoice;
}
void Game::setUserChoice(int newUserChoice)
{
    userChoice = newUserChoice;
}

/**
 * @brief This function prompts for userChoice
 *
 * @return void
 */
void Game::promptChoice()
{
    int counter = 0;
    bool inputError = false;

    do
    {
        if(counter > 0)
        {
            cerr << "ERROR: invalid input\nTry again\n";
            cin.clear();
            cin.ignore(100,'\n');
        }
        else
        {
            cout << "Enter your choice\n1 = rock\n2 = paper\n3 = scissors\n";
        }

        cin >> userChoice;

        if(userChoice < 1 || userChoice > 3)
        {
            inputError = true;
        }
        else
        {
            inputError = false;
        }

        counter++;
    }
    while(cin.fail() || inputError);
}

/**
 * @brief This function checks who wins
 *
 * @return USER if user wins, COMPUTER if computer wins, EVEN if even
 */
int Game::whoIsWinner()
{
    if((computerChoice == ROCK && userChoice == PAPER) ||
       (computerChoice == PAPER && userChoice == SCISSORS) ||
       (computerChoice == SCISSORS && userChoice == ROCK))
    {
        return USER;
    }
    else if((userChoice == ROCK && computerChoice == PAPER) ||
            (userChoice == PAPER && computerChoice == SCISSORS) ||
            (userChoice == SCISSORS && computerChoice == ROCK))
    {
        return COMPUTER;
    }
    else
    {
        return EVEN;
    }
}

/**
 * @brief This function calls whoIsWinner to see who wins and displays it
 *
 * @param computer is the computer's choice
 * @param user is the user's choice
 * @return
 */
void Game::displayWinner()
{
    int winner = 0;

    do
    {
        // Display computer's choice
        switch(computerChoice)
        {
            case ROCK:
                cout << "Computer chose rock\n";
                break;
            case PAPER:
                cout << "Computer chose paper\n";
                break;
            case SCISSORS:
                cout << "Computer chose scissors\n";
                break;
            default:
                break;
        }

        // Check winner and display it, start new game if even
        winner = whoIsWinner();
        switch(winner)
        {
            case USER:
                cout << "User wins\n\n";
                break;
            case COMPUTER:
                cout << "Computer wins\n\n";
                break;
            case EVEN:
                cout << "Even\nPlay again\n\n";
                srand((unsigned int)time(0));
                computerChoice = rand() % 3 + 1;
                promptChoice();
                continue;
            default:
                break;
        }
    }
    while(winner == EVEN);
}
