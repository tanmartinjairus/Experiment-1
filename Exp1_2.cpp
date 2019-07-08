#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double Den, Mass, Vol;
	cout << fixed << showpoint << setprecision(2);
	cout << "\t\tSolving Volume using Mass and Density\n";
	cout << "Enter mass (g): ";
	cin >> Mass;
	cout << "Enter density (g/cm^3): ";
	cin >> Den;
	Vol = 0.25 * Mass / Den;
	cout << "The Volume is: " << Vol << " cm^3.";
	system("pause");
	return 0;
}