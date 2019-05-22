#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int a, b, size, temp, num[100];
	cout << "Enter size(max. 100): ";
	cin >> size;
	cout << "\nEnter elements: ";
	for (a=0;a<size;a++)
	{
		cin >> num[a];
		cout << num[a] << "\n";
	}
	for (a=0;a<size;a++)
	{
		for (b=0;b<size-a-1;b++)
		{
			if(num[b]>num[b+1])
			{
				temp = num[b];
				num[b] = num[b+1];
				num[b+1] = temp;
			}
		}
	}
	cout << "\nDisplaying Sorted Values: \n";
	for (a=0;a<size;a++)
		cout << num[a];
	getch();
	return 0;
}