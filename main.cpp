//Breanna Powell
//SID: 0641962
#include <iostream>
#include <string>
using namespace std;

//Point system for university housing lottery.
//This program will ask students a series of questions and assign points based on the responses.
//The points will determine what order students will be allowed to select housing.
//Those students with the most points get the first choice of housing.

int main()
{
   
//Variables:
   int points = 0; 
   int age = 0; 
   int credits = 0;
   int demerits = 0;
   string answer = "";

//Question 1: What is your age in years?
   cout << "What is your age in years?" << endl;
   cin >> age; // Get user input from the keyboard
   cout << "You entered " << age << endl; // Display age

//Question 2: Are you a Freshman, Sophomore, Junior, or Senior?
//Current Freshman: 4 point
//Current Sophomore: 3 points
//Current Junior: 2 points
//Current Senior: 1 points
   cout << "Are you a Freshman, Sophomore, Junior, or Senior?" << endl;
   cout << "Enter 1 for Freshman; 2 for Sophomore; 3 for Junior; 4 for Senior" << endl;
   cin >> points; // Get user input from the keyboard

   switch(points){
       case 1: 
          answer = "Freshman";
          break;
       case 2: 
          answer = "Sophomore";
          break;
       case 3: 
          answer = "Junior";
          break;
       case 4: 
          answer = "Senior";
          break;
   }
   cout << "You entered " << answer << endl; // Display answer
   points = 5-points; // enable Freshman students to get more points than Seniors
   
   // if the student is younger than 23 years, add 1 point
   if (age <= 23) {
      points++; 
   }

//Question 3: Are you engaged in a Full-Time, Off-Campus Program (such as student teaching)?
   cout << "Are you engaged in a Full-Time, Off-Campus Program?" << endl;
   cout << "Enter Yes or No" << endl;
   cin >> answer;
   cout << "You entered " << answer << endl; // Display answer
   answer == "Yes" || answer == "yes" ? credits++ : credits;

//Question 4: Are you you on Academic Probation, Possible Academic Suspension, or Disciplinary Probation?
//Academic Probation: -1 point
//Possible Academic Suspension: -2 points
//On Disciplinary Probation at Any Point during the Academic Year: -3 points
   cout << "Are you you on Academic Probation, Possible Academic Suspension, or Disciplinary Probation?" << endl;
   cout << "Enter Yes or No" << endl;
   cin >> answer; // Get user input from the keyboard
   cout << "You entered " << answer << endl; // Display answer
   
   //Question that appears if a prior question is answered a certain way:
   if (answer == "Yes" || answer =="yes"){
       cout << "Enter 1 if you are on Academic Probation" <<endl;
       cout << "Enter 2 if you are on Possible Academic Suspension" <<endl;
       cout << "Enter 3 if you are on Disciplinary Probation" <<endl;
       cin >> demerits;
   }

//Question 5: Do you qualify for accomodations through Disability Resources for Students (DRS)?
   cout << "Do you qualify for accomodations through Disability Resources for Students (DRS)?" << endl;
   cout << "Enter Yes or No" << endl;
   cin >> answer; // Get user input from the keyboard
   cout << "You entered " << answer << endl; // Display answer
   if (answer == "Yes" || answer =="yes"){
      credits += (age - 18) / 2; //Credits for this are calculated
   }

//Question 6: Are you a veteran?
   cout << "Are you a veteran?" << endl;
   cout << "Enter Yes or No" << endl;
   cin >> answer; // Get user input from the keyboard
   cout << "You entered " << answer << endl; // Display answer
   answer == "Yes" || answer == "yes" ? credits++ : credits;

//Add the credits to the total points and subtract the demerits:
   points += credits - demerits;

//Display housing points:
   cout << "You have " << points <<" housing point(s)" << endl; // Display the points

}