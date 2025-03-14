#include <iostream>
using namespace std;

class Volume
{
    double l;
    double w;
    double h;

public:
    Volume()
    {
        l = 10;
        w = 10;
        h = 10;
    }

    Volume(double l)
    {
        this->l = l;
        this->w = l;
        this->h = l;
    }
    Volume(double l, double w, double h)
    {
        this->l = l;
        this->w = w;
        this->h = h;
    }

    double calculateVolume()
    {
        return l * w * h;
    }
};

int main()
{

    int ch;
    int a;
    double checkChoice;
    double l, w, h;
    do
    {
        cout << "\n0.Exit ";
        cout << "\n1. Calculate Volume with default values ";
        cout << "\n2. Calculate Volume with length,breadth and height with same value ";
        cout << "\n3. Calculate Volume with different length,breadth and height values. ";
        cout << "\n4.Enter the Choice ";
        cin >> ch;

        switch (ch)
        {
        case 0:
            break;
        case 1:
        {
            Volume v1;
            cout << " volume is : " << v1.calculateVolume() << endl;
        }
        break;
        case 2:
        {
            cin >> a;
            Volume v2(a);
            cout << "Enter Single value " << v2.calculateVolume() << endl;
        }
        break;
        case 3:
        {

            cout << "\nEnter length: ";
            cin >> l;
            cout << "\nEnter width: ";
            cin >> w;
            cout << "\nEnter height:";
            cin >> h;
            Volume v3(l, w, h);
            cout << "\n volume is " << v3.calculateVolume() << endl;
        }
        break;

        default:
            cout << "\nenter dimentional ";
        }

    } while (ch);
    return 0;
}
