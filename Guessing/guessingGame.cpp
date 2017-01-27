/*************************************************************************************
FILE: GUESSING
AUTHOR: EIRAMTHEB
        ELBARTOWASHERE
DESCRIPTION: The following program will act as a guessing game in which the user has 
eight tries to guess a randomly generated number. The program will tell the user each
time whether he guessed high or low
*************************************************************************************/
//#include <stdlib.h>
//#include <iostream>

//using namespace std;

//int main()


  // Create variable that will have a random number, variable to keep count, and
  // variable to store user's guess
  
  
  // Create loop that will keep asking user to guess until he actually guesses 
  // the correct answer or until the user runs out of tries. If the user doesn't
  // guess correctly, let user know if he needs to go higher or lower.
  
  
  // Tell the user if he guessed the right number or not
  
  //Preliminary work= first try; doesn't quite address all challenges
#include <iostream>
#include <cstdlib>
using namespace std;

int main () 
{
  int x=1;
  
  int z= 1 + (rand()% 20);      //Decided to put it out here so the value doesn't get recalculated
 
  cout<< "I'm thinking of a number between 1 and 20. Can you guess it? GO!"<< endl;
  cout<< "Go ahead, enter your guess, you have 8 tries."<< endl;      
  
  for(x = 1; x <= 8; x++){

  int y;
  cin>> y;
  
  if (y==z){
      cout<< "You guessed right!"<< endl;
      return 0;}                        //exits the program once the user guesses right
  
    else if (y<z)
      cout<< "You went too low :( "<< endl;
  
    else if (y>z)
      cout << "You went too high!!" << endl;
  
  else
      cout << "Why don't you try again? Enter you guess."<< endl;
    }
    
return 0;
}
