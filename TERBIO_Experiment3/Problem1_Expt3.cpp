#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	    int arr[10];
		int i;
		int max;
		int min; 
		int sum = 0;
		float ave;
	  
	    cout << "Enter 10 integers : ";
	    for (i = 0; i < 10; i++)
		        cin >> arr[i];
	    max = arr[0];
	    for (i = 0; i < 10; i++)
		    {
		        if (max < arr[i])
			            max = arr[i];
		    }
	    min = arr[0];
	    for (i = 0; i < 10; i++)
		    {
		        if (min > arr[i])
			            min = arr[i];
		    }
		for (i = 0; i < 10; i++)
		{
			sum += arr[i];
		}
	    cout << "Largest integer : " << max;
	    cout << "\nSmallest integer : " << min;
		cout << "\nSum of integers: " << sum;
		cout << "\nAverage of integers: " << sum / 10;
		
		_getch();
	    return 0;
}