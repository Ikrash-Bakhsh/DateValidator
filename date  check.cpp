#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void isValidDate()  
    {
        if (year < 1900 || year > 2100 || month < 1 || month > 12 || day < 1)
         {
            cout << "Entered date is not valid." << endl;
            return;
        }
        
        if (month == 2) 
        { 
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
             {
                if (day > 29)
                 {
                    cout << "Entered date is not valid." << endl;
                    return;
                }
            } else
             {
                if (day > 28) 
                {
                    cout << "Entered date is not valid." << endl;
                    return;
                }
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) 
        { 
              if (day > 30) 
              {
                cout << "Entered date is not valid." << endl;
                return;
            }
        } else
         { 
            if (day > 31) 
            {
                cout << "Entered date is not valid." << endl;
                return;
            }
        }

        cout << "Entered date is valid: " << day << "/" << month << "/" << year << endl;
    }
};

int main() 
{
    int day, month, year;

    cout << "Enter day, month, and year (separated by spaces): ";
    cin >> day >> month >> year;

    Date myDate(day, month, year);
    myDate.isValidDate();

    return 0;
}
