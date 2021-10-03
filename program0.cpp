#include <iostream>
using namespace std;
//Breanna Powell
//SID: 0641962

//Point system for university housing lottery.
//This program will ask students a series of questions and assign points based on the responses.
//The points will determine what order students will be allowed to select housing.
//Those with the most points get the first choice of housing.

int main()
{

//Question 1: Are you a Freshman, Sophomore, Junior, or Senior?
//Current Freshman: 1 point
//Current Sophomore: 2 points
//Current Junior: 3 points
//Current Senior: 4 points
    int points = 0; 
    cout << "Are you a Freshman, Sophomore, Junior, or Senior?" << endl;
    cout << "Enter 1 for Freshman; 2 for Sophomore; 3 for Junior; 4 for Senior" << endl;
    cin >> points; // Get user input from the keyboard
    
//Question 2: What is your age in years?
    int age = 0; 
    cout << "What is your age in years?" << endl;
    cin >> age; // Get user input from the keyboard
    if (age >= 23) {
        // if the student is older than 23 years, add 1 point
        points++;
    }

//Question 3: Are you engaged in a Full-Time, Off-Campus Program (such as student teaching)?
    int credits = 0;
    cout << "Are you engaged in a Full-Time, Off-Campus Program?" << endl;
    cout << "Enter 1 for yes; 0 for no" << endl;
    cin >> credits;

//Add the credits to the total points:
    points += credits;

//Test:
    cout << "You have " << points <<" housing points" << endl; // Display the points

}