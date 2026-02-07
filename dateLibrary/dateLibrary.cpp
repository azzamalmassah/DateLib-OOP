#include <iostream>
#include "clsDate.h"

using namespace std;

void PrintResult(string testName, bool passed)
{
    cout << testName << " : " << (passed ? "PASSED ✅" : "FAILED ❌") << endl;
}

int main()
{
    cout << "=== clsDate Example Execution ===\n\n";

    // Create date object using constructor
    clsDate d1(28, 2, 2024);

    cout << "Initial date: " << d1.dateToString() << endl;

    // Using object method
    d1.addOneDay();
    cout << "After addOneDay() (object method): " << d1.dateToString() << endl;

    // Using static method
    clsDate d2 = clsDate::addOneDay(clsDate(31, 12, 2023));
    cout << "Using static addOneDay(31/12/2023): " << d2.dateToString() << endl;

    // Validation (object)
    clsDate d3(29, 2, 2024);
    cout << "Is 29/2/2024 valid? (object): " << (d3.isValid() ? "Yes" : "No") << endl;

    // Validation (static)
    clsDate d4(29, 2, 2023);
    cout << "Is 29/2/2023 valid? (static): "
        << (clsDate::isValid(d4) ? "Yes" : "No") << endl;

    // Difference in days (static)
    clsDate a(1, 1, 2024);
    clsDate b(11, 1, 2024);
    int diff = clsDate::getDifferenceInDays(a, b);
    cout << "Difference between 1/1/2024 and 11/1/2024: " << diff << " days" << endl;

    // Compare dates (object)
    clsDate c1(5, 3, 2024);
    clsDate c2(10, 3, 2024);
    cout << "Is 5/3/2024 before 10/3/2024? "
        << (c1.isDateBeforeDate2(c2) ? "Yes" : "No") << endl;

    // Day name (static)
    cout << "Day short name of 1/1/2024: "
        << clsDate::dayShortName(1, 1, 2024) << endl;

    cout << "\n=== End of Demo ===\n";
    return 0;
}

