#include <iostream>
using namespace std;
//Breanna Powell
//SID: 0641962

//Point system for university housing lottery.
//This program will ask students a series of questions and assign points based on the responses.
//The points will determine what order students will be allowed to select housing.
//Those students with the most points get the first choice of housing.

int main()
{

//Question 1: Are you a Freshman, Sophomore, Junior, or Senior?
//Current Freshman: 4 point
//Current Sophomore: 3 points
//Current Junior: 2 points
//Current Senior: 1 points
   int points = 0; 
   cout << "Are you a Freshman, Sophomore, Junior, or Senior?" << endl;
   cout << "Enter 1 for Freshman; 2 for Sophomore; 3 for Junior; 4 for Senior" << endl;
   cin >> points; // Get user input from the keyboard
   string answer = "";
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
    
//Question 2: What is your age in years?
   int age = 0; 
   cout << "What is your age in years?" << endl;
   cin >> age; // Get user input from the keyboard
   cout << "You entered " << age << endl; // Display age
   if (age <= 23) {
      points++; // if the student is younger than 23 years, add 1 point
   }

//Question 3: Are you engaged in a Full-Time, Off-Campus Program (such as student teaching)?
   int credits = 0;
   cout << "Are you engaged in a Full-Time, Off-Campus Program?" << endl;
   cout << "Enter Yes or No" << endl;
   cout << "You entered " << answer << endl; // Display answer
   cin >> answer;
   answer == "Yes" || answer == "yes" ? credits++ : credits;

//Question 4: Are you you on Academic Probation, Possible Academic Suspension, or Disciplinary Probation?
//Academic Probation: -1 point
//Possible Academic Suspension: -2 points
//On Disciplinary Probation at Any Point during the Academic Year: -3 points
   int demerits = 0;
   cout << "Are you you on Academic Probation, Possible Academic Suspension, or Disciplinary Probation?" << endl;
   cout << "Enter Yes or No" << endl;
   cin >> answer; // Get user input from the keyboard
   cout << "You entered " << answer << endl; // Display answer
   
   //Question that appears if a prior question is answered a certain way:
   if (answer == "Yes" || answer =="yes"){
       cout << "Enter 1 if you are on Academic Probation" << answer <<endl;
       cout << "Enter 2 if you are on Possible Academic Suspension" << answer <<endl;
       cout << "Enter 3 if you are on Disciplinary Probation" << answer <<endl;
       cin >> demerits;
   }

//Question 5: Do you qualify for accomodations through Disability Resources for Students (DRS)?
   cout << "Do you qualify for accomodations through Disability Resources for Students (DRS)?" << endl;
   cout << "Enter Yes or No" << endl;
   cin >> answer; // Get user input from the keyboard
   cout << "You entered " << answer << endl; // Display answer
   if (answer == "Yes" || answer =="yes"){
      credits += points/2; //Credits for this are calculated by taking the points for age
   }

//Question 6: Are you a veteran?
   cout << "Do you qualify for accomodations through Disability Resources for Students (DRS)?" << endl;
   cout << "Enter Yes or No" << endl;
   cin >> answer; // Get user input from the keyboard
   cout << "You entered " << answer << endl; // Display answer
   answer == "Yes" || answer == "yes" ? credits++ : credits;

//Add the credits to the total points and subtract the demerits:
   points += credits - demerits;

//Test:
   cout << "You have " << points <<" housing points" << endl; // Display the points

}