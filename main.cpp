#include <iostream>
using namespace std;
int main()
{
	float number1;
	cout << "Enter the first number please: ";
	cin >> number1;

	float number2;
	cout << "Enter the second number please: ";
	cin >> number2;

	char opp;
	cout << "Please choose the operation you want to do. + , - , * , / : ";
	cin >> opp;


	if (opp == '+')
		cout << number1 << " + " << number2 << " = " << number1 + number2;

	else if (opp == '-')
		cout << number1 << " - " << number2 << " = " << number1 - number2;

	else if (opp == '*')
		cout << number1 << " * " << number2 << " = " << number1 * number2;

	else if (opp == '/')
		cout << number1 << " / " << number2 << " = " << number1 / number2;

	else
		cout << "Please choose the operation from the ones above!";
}