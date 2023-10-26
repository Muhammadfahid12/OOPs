#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
    Date()
    {
    }

    void inputDate(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    bool validateDate()
    {
        if (day < 1 || day > 31)
        {
            return false;
        }

        if (month < 1 || month > 12)
        {
            return false;
        }

        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        {
            return false;
        }

        if (month == 2)
        {
            if (year % 4 == 0 && year % 100 != 0)
            {
                if (day > 29)
                {
                    return false;
                }
            }
            else if (day > 28)
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Date date1;
    date1.inputDate(10, 15, 2023);
    bool result = date1.validateDate();
    if (result)
    {
        cout << "Valid Data is " << date1.getDay() << "/" << date1.getMonth() << "/" << date1.getYear();
    }
    else
    {
        cout << "Invalid date";
    }

    return 0;
}