// Odd or Even.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 

using namespace std;

int GetInput(string inputMessage);
int main()
{
    int value = GetInput("Pick a number between -10000 and 100000");
    int oddCheck = value % 2;
    if (oddCheck == 1)
    {
        cout << "value is odd" << endl;
    }
    else
    {
        cout << "value is even" << endl;
    }
}
int GetInput(string inputMessage)
{
    int userInput = 0;
    while (true)
    {
        cout << inputMessage << endl;
        string rawInput;
        getline(cin, rawInput);
        try
        {
            userInput = stoi(rawInput);
            if (userInput < -10000 && userInput > 100000)
            {
                throw new exception();
            }
            break;
        }
        catch (exception)
        {
            cout << "This input is invalid" << endl;
        }
    }
    return userInput;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
