#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	srand(time(NULL));
	int secret_number = rand() % (b - a + 1) + a;
	int guess;
	int s = 1;
	do {
		cout << "Enter number from   " << a << "   to  " << b << endl;
		cin >> guess;

		if (secret_number > guess)
		{
			cout << "Secret number is bigger" << endl;
			s++;
		}
		else if (secret_number < guess)
		{
			cout << "Secret number is smaller" << endl;
			s++;
		}
	} while (secret_number != guess);
	cout << "You are winner!" << endl;
	cout << "Number of attempts  " << s << endl;
	double factorial = 1;     // вычисление факториала
	for (int i = 2; i <= secret_number; i++)
	{
		factorial *= i;
	}
	cout << "Factorial " << secret_number << "=" << factorial << endl;

	return 0;
}