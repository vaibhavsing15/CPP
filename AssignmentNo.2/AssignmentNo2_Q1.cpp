#include <iostream>
using namespace std;

class DateTime
{
    int day, month, year;

public:
    void initDate()
    {
        day = 11;
        month = 3;
        year = 2025;
    }
    void printDateOnConsole()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
    void acceptDateFromConsole()
    {
        cout << "Enter the day in number: " << endl;
        cin >> day;
        cout << "Enter the month in number: " << endl;
        cin >> month;
        cout << "Enter the year in number: " << endl;
        cin >> year;
    }
    bool isLeapYear()
    {
        if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))
        {
            return true;
        }
        return false;
    }
};

struct Date
{
private:
    int day, month, year;

public:
    void initDate()
    {
        day = 11;
        month = 3;
        year = 2025;
    }
    void printDateOnConsole()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
    void acceptDateFromConsole()
    {
        cout << "Enter the day in number : " << endl;
        cin >> day;
        cout << " Enter the month in number : " << endl;
        cin >>
            month;
        cout << "Enter the year in number: " << endl;
        cin >> year;
    }
    bool
    isLeapYear()
    {
        if ((year % 4 == 0) || (year % 100 == 0 && year % 400 == 0))
        {
            return true;
        }
        return false;
    }
};

int main()
{

    DateTime dt1;
    struct Date d1;
    int ch;
    int checkChoice;
    do
    {
        cout << "\nSelect Method" << endl;
        cout << "1. Using Class: " << endl;
        cout << "2. Using Structure: " << endl;
        cin >> checkChoice;

        d1.initDate();
        dt1.initDate();
        do
        {
            cout << "\n0. to exit" << endl;
            cout << "1. Display Date" << endl;
            cout << "2. Input Date" << endl;
            cout << "3. Find Is Leap Year" << endl;

            cout << "Enter Choice" << endl;
            cin >> ch;
            if (checkChoice == 1)
            {
                switch (ch)
                {
                case 0:
                    cout << "Thank you:)" << endl;
                    break;
                case 1:
                    dt1.printDateOnConsole();
                    break;
                case 2:
                    dt1.acceptDateFromConsole();
                    break;
                case 3:
                    if (dt1.isLeapYear())
                    {
                        cout << "Leap Year" << endl;
                    }
                    else
                    {
                        cout << "Not Leap Year" << endl;
                    }
                    break;
                default:
                    cout << "Wrong Input:(" << endl;
                }
            }
            else if (checkChoice == 2)
            {
                switch (ch)
                {
                case 0:
                    cout << "Thank you:)" << endl;
                    break;
                case 1:
                    d1.printDateOnConsole();
                    break;
                case 2:
                    d1.acceptDateFromConsole();
                    break;
                case 3:
                    if (d1.isLeapYear())
                    {
                        cout << "Leap Year" << endl;
                    }
                    else
                    {
                        cout << "Not Leap Year" << endl;
                    }
                    break;
                default:
                    cout << "Wrong Input:(" << endl;
                }
            }
        } while (ch);
    } while (checkChoice);
}