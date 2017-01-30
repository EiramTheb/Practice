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
  

#include <iostream>
#include <cstdlib>      //Adds library for random generated numbers
using namespace std;

int main () 
{
  int y;
        
  //Decided to put it out here so the value doesn't get recalculated
  //Stores a randomly generated number, value from 1 to 20, in variable z
  int z= 1 + (rand()% 20);    
 
  cout<< "I'm thinking of a number between 1 and 20. Can you guess it? GO!"<< endl;
  cout<< "Go ahead, enter your guess, you have 8 tries."<< endl;      
  
  //Parameters, x starts at value one and will go up one value with every loop. Once it reaches the value of 8 the 
  //program will close.
  for(x = 1; x <= 8; x++){
  
  //Store the user's guess
  cin>> y;
  
  //Compares user's guess (y) to the randomly generated number (z)
  //exits the program once the user guesses right; continues to allow guesses until 8 guesses and tells user if his 
  //guess is high or low
  if (y==z){
      cout<< "You guessed right! \n Now Bye-Bye!"<< endl;
      return 0;}                       
  
    else if (y<z)
      cout<< "You went too low :( \n Why don't you try again?" << endl;
  
    else if (y>z)
      cout << "You went too high!! \n Why don't you try again?" << endl;

    }
    
return 0;
}
