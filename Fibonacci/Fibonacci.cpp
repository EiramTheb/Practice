/*************************************************************************************
FILE: FIBONACCI SERIES
AUTHOR: BETH M ESTEVEZ QUINTANA
        ARTURO TORRES IRIZARRY
DESCRIPTION: One of the classic beginner's practice problems. In the Fibonacci 
sequence of numbers, each number is the sum of the previous two numbers. Fibonacci 
began the sequence not with 0, 1, 1, 2, as modern mathematicians do but with 1,1, 2,
etc. He carried the calculation up to the thirteenth place (fourteenth in modern 
counting), that is 233, though another manuscript carries it to the next place: 1, 1,
2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377.
In this exercise, we want the user to input a number, and the program will calculate
the result until that number of iterations. For example, if the user inputs 3, the 
program will calculate 0+1=1, 1+1=2, 2+1=3, and then return 3, as 3 is the result of 
the 3rd iteration.
**************************************************************************************/
//After many tries and several explanations, my answer

/*#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int y = 1;
    int z;
    int a;
    int icounter=0;
    
    cout << "Enter the iteration number for the Fibonacci sequence." << endl;
    cin >> a; //user iteration value
    cout << "You entered iteration number:" << a << endl;
  
  if (a < 1) {
      cout << "Not gonna do it, try again"<< endl;
  }
      
 else {
    while (a != icounter) {
        z = x + y;
        if (a != icounter){
            x = y;
            y = z;
            
            icounter++;
        }
       
     } 

     cout << "Iteration number: " << a << " equals "<< z << endl;
         
 }
    return 0;
}*/

// Revised Fibonacci

#include <iostream>
using namespace std;

int main()
{
    unsigned long long x = 0;
    unsigned long long y = 0;
    unsigned long long z;
    unsigned long long a;
    int icounter=0;
    
    cout << "Enter the iteration number for the Fibonacci sequence. (Max iteration number is 238)" << endl;
    cin >> a; //user iteration value
    cout << "You entered iteration number:" << a << endl;
  
  if (a < 1) {
      cout << "Not gonna do it, try again"<< endl;
  }
     
  else {
    while (a != icounter) {
        z = x + y;
            //Prints all of the values for each iteration
            cout << z << " ";
        
        //Creates a loop that makes possible getting the first 3 numbers of the sequence
        if (icounter < 2){          
            x = 0;
            y = 1;
            icounter++;
            }
        
        //Once the first 3 values are achieved, uses this to get the highest possible sequence number
        else if (a != icounter){
            x = y;
            y = z;
            
            icounter++;
            }
       
     } 

     cout << "Iteration number: " << a << " equals "<< z << endl;
         
 }
    return 0;
}
