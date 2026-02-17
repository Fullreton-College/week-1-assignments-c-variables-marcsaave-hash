/* create the code yourself */
#include <iostream>
#include <string>
using namespace std;
int main()
{
 cout << "Enter your instructor name!\n";
    string instructorName;
    cin >> instructorName;

    cout << "Enter your name!\n";
    string name;
    cin >> name;

    cout << "Enter a food!\n";
    string food;
    cin >> food;

    cout << "Enter a number between 100 and 120!\n";
    string number;
    cin >> number;

    cout << "Enter an adjective!\n";
    string adjective;
    cin >> adjective;

    cout << "Enter a color!\n";
    string color;
    cin >> color;

    cout << "Enter an animal!\n";
    string animal;
    cin >> animal;

    cout << "Dear Instructor " << instructorName << ",\n\n";
    cout << "I am sorry that I am unable to turn in my homework at this time.\n";
    cout << "First, I ate a rotten " << food << ", which made me turn " << color << " and extremely ill.\n";
    cout << "I came down with a fever of " << number << ".\n";
    cout << "Next, my " << adjective << " pet " << animal
         << " must have smelled the remains of the " << food
         << " on my homework, because he ate it.\n";
    cout << "I am currently rewriting my homework and hope you will accept it late.\n\n";
    cout << "Sincerely,\n\n" << name << endl;

    return 0;
}