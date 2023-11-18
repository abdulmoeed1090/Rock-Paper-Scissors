#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
// computer turn function
char computerTurn(int computerchoice)
{
    // generating random number
    srand(static_cast<unsigned int>(time(0)));
    computerchoice = (rand() % 9 + 1);
    // using switch-case
    switch (computerchoice)
    {
    case 1 ... 3:
        computerchoice = 'r';
        break;
    case 4 ... 6:
        computerchoice = 'p';

        break;
    case 7 ... 9:
        computerchoice = 's';
        break;
    default:
        cout << "Invalid number!!!\n";
        break;
    }
    return computerchoice;
}
// main function
int main()
{
    // variables
    char playerChoice;
    int computerchoice;
    int playerScore = 1, computerScore = 1;
    // using for-loop
    for (int i = 0; i < 3; i++)
    {
        cout << "Rock,Paper and scissor game!\n";
        cout << "Choose one of the following options\n";
        cout << "______________________________________________\n";
        cout << "(r) for rock\n(p) for paper\n(s) for scissor\n";

        cin >> playerChoice;
        {
            // using if-else
            if (playerChoice == computerTurn(computerchoice))
            {
                cout << "Tie..\n";
            }
            else if ((playerChoice == 'r' && computerTurn(computerchoice) == 's') || (playerChoice == 'p' && computerTurn(computerchoice) == 'r') || (playerChoice == 's' && computerTurn(computerchoice) == 'p'))
            {
                cout << "You won....\n";
                cout << "PlayerScore is:" << playerScore << endl;
                playerScore++;
            }
            else if ((playerChoice == 's' && computerTurn(computerchoice) == 'r') || (playerChoice == 'r' && computerTurn(computerchoice) == 'p') || (playerChoice == 'p' && computerTurn(computerchoice) == 's'))
            {
                cout << "computer won....\n";
                cout << "ComputerScore is:" << computerScore << endl;
                computerScore++;
            }
        }
    }
    cout << endl;
    // using if-else
    if (playerScore > computerScore)
    {
        cout << "player won the game....\n";
    }
    else if (computerScore > playerScore)
    {
        cout << "computer won the game....\n";
    }
    else
    {
        cout << "TIE....\n";
    }
    return 0;
}
