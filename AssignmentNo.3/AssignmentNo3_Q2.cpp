#include<iostream>
using namespace std;
class tollbooth
{
    public:
float totalCash;
unsigned int payingCars;
unsigned int nonPayingCars;
int totalCars;

// float totalCash = totalCash + 0.5;
public:
tollbooth()
{
    totalCash = 0;
    payingCars = 0;
    nonPayingCars = 0;
    totalCars = 0;
}
void addPayingCar()
{
    totalCars++;
    payingCars++;
    totalCash = totalCash + 0.5;
}
void addNonPayingCar()
{
    totalCars++;
    nonPayingCars++;
}

void printOnConsole()
{
    cout << "Total Cars: " << totalCars << endl;
    cout << "Total Cash: " << totalCash << endl;
    cout << "Paying Cars: " << payingCars << endl;
    cout << "Non Paying Cars: " << nonPayingCars << endl;
}
};
int main()
{
    tollbooth toll;
    int choice;
    while (true) {
        cout << "\nTollbooth Menu:\n";
        cout << "1. Add a paying car\n";
        cout << "2. Add a non-paying car\n";
        cout << "3. Display current status\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
            {
                toll.addPayingCar();  
                cout << "A paying car has passed.\n";
             } break;
            case 2:
                toll.addNonPayingCar();   // Add a non-paying car
                cout << "A non-paying car has passed.\n";
                break;
            case 3:
                toll.printOnConsole();  // Display current toll booth status
                break;
            case 4:
                cout << "Exit";
                return 0;
                default:
                    cout << "Invalid choice";
        }
    }
}