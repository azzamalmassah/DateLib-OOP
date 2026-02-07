# 📅 Date Library (OOP) in C++

An object-oriented C++ date utility library built around the `clsDate` class.  
This project provides a rich set of features for working with dates, including validation, comparison, date arithmetic, calendars, and business day calculations.

This is the **OOP version** of my date utilities (separate from my functional implementation).

---

## ✨ Features

  - Create dates from:
  - Day / Month / Year
  - String (`"dd/mm/yyyy"`)
  - Day order in year
  - System date
  - Date validation (leap years supported)
  - Date formatting (`dateToString`)
  - Day / Month / Year calculations
  - Add / subtract:
  - Days, weeks, months, years, decades, centuries, millennium
  - Compare dates:
  - Before, Equal, After
  - Difference in days
  - Day & month names
  - Print:
  - Month calendar
  - Year calendar
  - Business day & weekend calculations
  - Vacation day calculations

---

##  Example Usage

```cpp
#include <iostream>
#include "clsDate.h"

using namespace std;

int main()
{
    // Create date object
    clsDate d1(28, 2, 2024);
    cout << "Initial date: " << d1.dateToString() << endl;

    // Object method
    d1.addOneDay();
    cout << "After addOneDay(): " << d1.dateToString() << endl;

    // Static method
    clsDate d2 = clsDate::addOneDay(clsDate(31, 12, 2023));
    cout << "Static addOneDay(31/12/2023): " << d2.dateToString() << endl;

    // Validation
    clsDate d3(29, 2, 2024);
    clsDate d4(29, 2, 2023);

    cout << "Is 29/2/2024 valid? " << (d3.isValid() ? "Yes" : "No") << endl;
    cout << "Is 29/2/2023 valid? " << (clsDate::isValid(d4) ? "Yes" : "No") << endl;

    // Difference in days
    clsDate a(1, 1, 2024);
    clsDate b(11, 1, 2024);
    cout << "Difference: " << clsDate::getDifferenceInDays(a, b) << " days" << endl;

    return 0;


}
```
## Expected Output
```
Initial date: 28/2/2024
After addOneDay(): 29/2/2024
Static addOneDay(31/12/2023): 1/1/2024
Is 29/2/2024 valid? Yes
Is 29/2/2023 valid? No
Difference: 10 days

```
## Project Structure
```
dateLibrary/
├── .gitignore
├── README.md
├── dateLibrary.sln
└── dateLibrary/
    ├── clsDate.h
    ├── dateLibrary.cpp
    ├── dateLibrary.vcxproj
    └── dateLibrary.vcxproj.filters

```
## Notes

### This project focuses on clean OOP design for date handling.

### No external libraries required.

# Designed for learning, practice, and reuse in C++ projects.

