/*
John Maxime Aritmetica
Lab 2, input and output
Jan 2 2025
*/
#include<iostream>

using namespace std;


int main() {
    cout << "======= Example 1: cout and endl =======" << endl;
    cout << "This is my first program!\n" << "This is fun!" << endl;
    cout << "Lab 2 \t\t\t variables" << endl;

    cout << "======= Example 2: string and character variables =======" << endl;
    string username;
    cout << "Initial username: " << username << endl;

    username = "Peter Pan";
    cout << "Updated username: " << username << endl;

    cout << "Enter a username: ";
    cin >> username;
    cout << "Entered username: " << username << endl;

    
    cout << "\v-------- Example 3: character variables --------" << endl;

    
    char symbol = '$';
    cout << "Initial symbol = " << symbol << endl;

    
    cout << "Which is your favorite symbol? ";
    cin >> symbol;
    cout << symbol << " is your favorite symbol :)" << endl;

    cout << "\v-------- EXERCISE --------" << endl;

    string country;
    char gender;

    
    cout << "Enter a country: ";
    cin >> country;
    cout << "Enter a gender (f for female, m for male, o for others): ";
    cin >> gender;

    
    cout << "\nEntered country: \t" << country << endl;
    cout << "Selected gender: \t" << gender << endl;

    return 0;
}