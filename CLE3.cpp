/* 
* Author: Kritika Singh
 * Created on May 19, 2022, 12:16 p.m.
 * Version: 1.0
 * Purpose: Input Output Manipulation and some Mathematical operations
 * Description: 
 * - Ask the user to enter a valid whole number.
 * - A valid whole number is between 0 and 50 inclusive.
 * - If the user enters a number out of range, your program will print an error message and keep prompting until the user enters a valid number.
 * - After the user enters a valid input, process that input and print out a message for the user that displays the value of his entry and 
 *   specify whether it is an even or odd number. 
 */

#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    
    for(int i = 0; i < 1; i++)
    {
        cout << "Please enter a valid whole number :" << endl;
        cin >> number;
        
        while(cin.fail() || number <= 0 || number >= 50)
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Out of range!!" << endl;
            cout << "It must be a number between 0 and 50, try again:" << endl;
            cin >> number;
        }

    }

    cout << "The number you entered is " << number << endl;
    
    if(number % 2 == 0)
    {
        cout << "The number you entered is even." << endl;
    }
    else
    {
        cout << "The number you entered is odd." << endl;
    }
    
    return 0;
}