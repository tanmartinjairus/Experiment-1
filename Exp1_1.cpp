#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double Pre, Sid, Box, Gen;
	int Num1, Num2, Num3, Num4;

	cout << "\t\t\tTicket Price\n";
	cout << "Premium \t\t" << " 250" << endl;
	cout << "Sideline \t\t" << " 100" << endl;
	cout << "Box \t\t\t" << " 50" << endl;
	cout << "General Admission\t" << " 25\n" << endl;

	cout << "Enter the amount of tickets sold\n";
	cout << "Premium: ";
	cin >> Num1;
	cout << "Sideline: ";
	cin >> Num2;
	cout << "Box: ";
	cin >> Num3;
	cout << "General Admission: ";
	cin >> Num4;

	Pre = 250 * Num1;
	Sid = 100 * Num2;
	Box = 50 * Num3;
	Gen = 25 * Num4;

	cout << "\nCalculating the total sale amount....\n\n";

	cout << fixed << showpoint << setprecision(2);

	cout << "\t\t\tTicket Price\t" << "Number of tickets sold\t" << "Total Sale Amount\n";
	cout << "Premium \t\t" << " 250\t\t" << Num1 << "\t\t\t " << Pre << endl;
	cout << "Sideline \t\t" << " 100\t\t" << Num2 << "\t\t\t " << Sid << endl;
	cout << "Box \t\t\t" << " 50\t\t" << Num3 << "\t\t\t " << Box << endl;
	cout << "General Admission\t" << " 25\t\t" << Num4 << "\t\t\t " << Gen << endl;

	system("pause");
	return 0;
}