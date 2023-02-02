#include <iostream>
using namespace std;

int main()
{
	cout<<"Welcome to the auto repair store" << endl << endl;
	cout << "We are inspecting your vehicle" << endl;
	cout << "inspecting..." << endl;
	int inspect = 75;
	int minimum = 120;
	int labour = 75;
	int hour = 0;
	int damage = 0;
	cout << "inspection finished." << endl;
	cout << "Damaged parts: ";
	cin >> damage;

	int light = 25;
	int wheel = 50;
	int chassis = 100;
	int engine = 200;

	int lightQ = 0;
	int wheelQ = 0;
	int chassisQ = 0;
	int engineQ = 0;

	if (damage == 0)
	{
		cout << "your vehicle is not damaged." << endl;
		cout << "amount to pay"<< endl;
		cout << "BILL:" << endl;
		cout << "inspection cost: 75$" << endl << "total: 75$" << endl;
	}
	else
	{
		cout << "enter a specific number of each damaged part: " << endl;
		cout << "Light: ";
		cin >> lightQ;
		cout << "Wheel: ";
		cin >> wheelQ;
		cout << "Chassis: ";
		cin >> chassisQ;
		cout << "Engine: ";
		cin >> engineQ;


		int a = lightQ * light;
		int b = wheelQ * wheel;
		int c = chassisQ * chassis;
		int d = engineQ * engine;

		cout << "Enter the hours of labour: ";
		cin >> hour;
		int e = hour * labour;

		cout <<"BILL:" << endl;
		cout << "Damaged light parts: " << lightQ << "->" << "$" << a << endl;
		cout << "Damaged wheel parts: " << wheelQ << "->" << "$" << b << endl;
		cout << "Damaged chassis parts: " << chassisQ << "->" << "$" << c << endl;
		cout << "Damaged engine parts: " << engineQ << "->" << "$" << d << endl;
		cout << "Hours of labour: " << hour << "->" << "$" << e << endl;
		cout << "minimum charge: $120" << endl << "total: $" << a + b + c + d + e + minimum << endl;
	}
	return 0;
}
