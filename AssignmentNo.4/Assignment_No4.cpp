#include <iostream>
using namespace std;

class Time
{
    int h;
    int m;
    int s;

public:
    Time() : Time(0, 0, 0) {}
    Time(int h, int m, int s)
    {
        this->h = h;
        this->m = m;
        this->s = s;
    }
    int getHour()
    {
        return h;
    }
    int getMinute()
    {
        return m;
    }
    int getSec()
    {
        return s;
    }

    void printTime()
    {
        cout << h << ":" << m << ":" << s << endl;
    }

    void setHour(int h)
    {
        this->h = h;
    }
    void setMinute(int m)
    {
        this->m = m;
    }
    void setSec(int s)
    {
        this->s = s;
    }
};

int main()
{
    int timeValue;
    Time **ptr = new Time *[5];
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = new Time();
        cout << "Enter Hrs: ";
        cin >> timeValue;
        ptr[i]->setHour(timeValue);
        cout << "Enter Mins: ";
        cin >> timeValue;
        ptr[i]->setMinute(timeValue);
        cout << "Enter Secs: ";
        cin >> timeValue;
        ptr[i]->setSec(timeValue);
    }
    for (int i = 0; i < 5; i++)
    {
        ptr[i]->printTime();
    }

    for (int i = 0; i < 5; i++)
    {
        delete ptr[i];
        ptr[i] = NULL;
    }
    delete[] ptr;
    ptr = NULL;
}
