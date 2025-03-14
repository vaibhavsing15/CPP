#include <iostream>
using namespace std;

namespace NStudent
{
	class Student
	{
		int roll_no;
		string name;
		int marks;

	public:
		void inittudentData()
		{
			roll_no = 0;
			name = "";
			marks = 0;
		}
		void printStudentOnConsole()
		{
			cout << "\nRoll No: " << roll_no;
			cout << "\nName: " << name;
			cout << "\nMarks: " << marks;
		}
		void acceptStudentFromConsole()
		{
			cout << "\nEnter Roll No: ";
			cin >> roll_no;
			cout << "\nEnter Name: ";
			cin >> name;
			cout << "\nEnter Marks: ";
			cin >> marks;
		}
	};
}
int main()
{
	NStudent::Student s1;
	s1.inittudentData();
	int ch;
	do
	{
		cout << "\n0.Exit";
		cout << "\n1.Print Student Data";
		cout << "\n2.Insert Student Data";
		cout << "\nEnter Choice: ";
		cin >> ch;
		if (ch == 1)
		{
			s1.printStudentOnConsole();
		}
		else if (ch == 2)
		{
			s1.acceptStudentFromConsole();
		}
		else if (ch == 0)
		{
			cout << "Thanks You:)" << endl;
		}
		else
		{
			cout << "Wrong Choice:(" << endl;
		}
	} while (ch);
	return 0;
}