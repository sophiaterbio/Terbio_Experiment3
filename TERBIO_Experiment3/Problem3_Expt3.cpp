#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	int arr[50], n, i, j, temp;

	cout << "Enter array size : "; cin >> n;
	cout << "Enter array elements : ";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	j = i - 1;  
	i = 0;   
	while (i < j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	cout << "The reverse of the Array:\n ";
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	_getch();
	return 0;
}