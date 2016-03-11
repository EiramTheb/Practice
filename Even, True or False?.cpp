// Answering the question: Write a program that asks the user to input an integer, and tells the user whether
// the number is even or odd. Write a function called isEven() that returns true if an integer passed to it is even. 
// Use the modulus operator to test whether the integer parameter is even.



#include <iostream>

int userNumber() //Number to be tested, provided by user
{
    std::cout<< "Enter an integer and press enter."<<std::endl;
    int x;
    std::cin>> x;
    return x;
}

bool isEven(int x) //Test if the number leaves a remainder after being divided by 2
{
    if (x % 2== 0)
        std::cout<< "True" << std::endl;
    else
        std::cout<< "False" <<std::endl;
    
    return 0;
}

int main()
{
    int x= userNumber();
    isEven(x);
    
    return 0;
}
