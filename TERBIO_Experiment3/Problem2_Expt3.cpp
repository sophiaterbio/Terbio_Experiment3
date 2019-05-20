#include <iostream>
#include <conio.h>

using namespace std;

const int PROVINCE = 3;
const int DAY = 7;

int main()
{
	int temperature[PROVINCE][DAY];
	int i;
	int j;

	cout << "Enter all temperature for a week of Province 1, Province 2, and then Province 3. \n";

	for (i = 0; i < PROVINCE; ++i)
	{
		for (j = 0; j < DAY; ++j)
		{
			cout << "Province " << i + 1 << ", Day " << j + 1 << " : ";
			cin >> temperature[i][j];
		}
	}

	cout << "\n\nDisplaying Values:\n ";

	for (i = 0; i < PROVINCE; ++i)
	{
		for (j = 0; j < DAY; ++j)
		{
			cout << "Province " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
		}
	_getch();
	return 0;
}
