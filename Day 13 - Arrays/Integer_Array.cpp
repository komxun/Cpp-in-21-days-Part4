// Listing 13.1 - Using an Integer Array (P.409)
#include <iostream>

int main()
{
    int myArray[5];   // Array of 5 integers
    int i;
    for (i=0; i<5; i++)  // 0-4
    {
        std::cout << "Value of myArray[" << i << "]: ";
        std::cin >> myArray[i];
    }
    for(i=0; i<5; i++)
    {
        std::cout << i <<": " << myArray[i] << std::endl;
    }
    return 0;
}