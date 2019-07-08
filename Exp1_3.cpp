#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double Net, Pay, D1, D2, Ave, Rate, Interest;

	cout << fixed << showpoint << setprecision(3);

	cout << "Enter the balance: ";
	cin >> Net;

	cout << "Enter the payment: ";
	cin >> Pay;

	cout << "Enter the number of days in the billing cycle: ";
	cin >> D1;

	cout << "Enter the number of days payment is made before billing cycle: ";
	cin >> D2;

	Ave = (Net * D1 - Pay * D2) / D1;

	Rate = 0.0097;
	Interest = Ave * Rate;

	cout << "The interest is " << Interest << ".";

	system("pause");
	return 0;

}