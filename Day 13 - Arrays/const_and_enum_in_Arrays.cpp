// Listing 13.3 - Dimensioning arrays with const and enumeration (P.415)
#include <iostream>
int main()
{
    enum WeekDays {Sun, Mon, Tue, Wed, Thu, Fri, Sat, DaysInWeek};
    int ArrayWeek[DaysInWeek] = {10, 20, 30, 40, 50, 60, 70};
    // ArrayWeek is declared to have DaysInWeek elements, which is 7 

    std::cout << "The value at Tuesday is: " << ArrayWeek[Tue];
    return 0;
}