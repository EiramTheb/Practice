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

// void isEven(int x)  seria la funcion correcta, pq abajo no estas asignandole el returned boolean a nada
void isEven(int x) //Test if the number leaves a remainder after being divided by 2
{
    if (x % 2== 0)
        {std::cout<<std::boolalpha;
            std::cout<< true <<std::endl;
            std::cout<< "The integer is even" <<std::endl;}
    else
        {std::cout<<std::boolalpha;
            std::cout<< false <<std::endl;
            std::cout<< "The integer is odd" <<std::endl;}
      // Si cambias la funcion a q regrese void (nada), esto no hace sentido, so lo remueves
}

int main()
{
    int x= userNumber();
    isEven(x);
    
    return 0;
}

/*

int userNumber() //Number to be tested, provided by user
{
    std::cout<< "Enter an integer and press enter."<<std::endl;
    int x;
    std::cin>> x;
    return x;
}

bool isEven(int x)
{
    if (x % 2== 0)
        return true;
    else
        return false;
}

int main()
{
    int x= userNumber();
    if(isEven(x));
        std::cout << "The number you entered is even." << std::endl;
    else
        std::cout << "The number you entered is odd." << std::endl;
    return 0;
}

*/
