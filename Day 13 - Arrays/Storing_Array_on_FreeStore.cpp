// Listing 13.6 - An array of pointers to objects (P.422)
#include <iostream>
using namespace std;

class Cat
{
    public:
        Cat() {itsAge = 1; itsWeight =5;} // Constructor    
        ~Cat() {}                         // Destructor
        int GetAge() const {return itsAge;}
        int GetWeight() const {return itsWeight;}
        void SetAge(int age) {itsAge = age;}
        void SetWeight(int weight) {itsWeight = weight;}
    private:
        int itsAge;
        int itsWeight;
};

int main()
{
    Cat * Family[500];  // Array of pointers type Cat
    int i;
    Cat * pCat;
    for (i=0; i<500; i++)
    {
        pCat = new Cat;         // Allocate memory
        pCat -> SetAge(2*i +1); // Set age to individual cat
        Family[i] = pCat;       // Save cat pointer into array
    }
    for (i=0; i<500; i++)
    {
        cout << "Cat #" << i+1 << ": ";
        cout << Family[i] -> GetAge() << " years old" << endl;
    }
    return 0;
}