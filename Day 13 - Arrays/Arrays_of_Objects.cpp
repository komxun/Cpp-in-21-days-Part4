// Listing 13.4 - An array of objects (P.416)
#include <iostream>
using namespace std;

class Cat
{
    public:
        Cat() {itsAge = 1; itsWeight = 5;}  // constructor
        ~Cat() {}
        int GetAge() {return itsAge;}
        int GetWeight() {return itsWeight;}
        void SetAge(int age) {itsAge = age;}
    private:
        int itsAge;
        int itsWeight;
};

int main()
{
    Cat Litter[5];    // Array of 5 Cats
    int i;
    for (i=0; i<5; i++)
    {
        Litter[i].SetAge(2*i + 1);
    }
    for (i=0; i<5; i++)
    {
        cout << "Cat #" << i+1 << ": ";
        cout << Litter[i].GetAge() << " years old" << endl;
    }
    return 0;
}