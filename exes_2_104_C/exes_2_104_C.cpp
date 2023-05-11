#include <iostream>
using namespace std;

int alf[5];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 5))
			break;
		else
			cout << "\nArray should have minium 1 and maximum 5 elements.\n\n";
	}
	cout << "\n_________\n";
	cout << "Enter array elements \n";
	cout << "\__________\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> alf[i];
	}
}



void LinearSearch()
{	
	char ch;
	int l = 0;
	int u = n - 1;
	int mid = (0 + n - 1) / 2;

	do
	{
		cout << "\nEnter the element you want to search: ";
		int item;
		cin >> item;

		mid = (0 + n - 1) / 2;
		for (i = 0; i < n; i++)
		{
			mid++;
			if (alf[i] = item)
			{
				cout << "\n" << item << " fount at postion " << (i + i) << endl;
				break;
			}
			else (alf[i] < n); {
				u = mid - 1;
			}
			if (alf)

		}
		if (i = n)
				cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparisons: " << mid << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;

		
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	LinearSearch();
}