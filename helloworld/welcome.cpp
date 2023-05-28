#include <iostream>
using namespace std;

void welcome()
{
    // Notice user input name
    cout << "Please input your name: " << endl;

    // use a variable to store the keyboard input
    string name;

    cin >> name;

    // output the welcome message
    cout << "Welcome, "<< name << endl;
}