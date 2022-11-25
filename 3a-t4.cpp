#include<iostream> 
using namespace std;

int main()
{
	int k, i = 1, sum_k = 0, number;
	cout << " Enter the amount of integers to sum = "; cin >> k;
	while (1) //this part of the program running when the user enters a variable that is not integer
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "You have entered wrong input " << endl;
			cout << "Enter the amount of integers to sum = ";
			cin >> k;
			break;
		}
		if (!cin.fail())
			break;
	}
	if (k == 0)
	{
		cout << " The total sum of 0 integers is: 0 ";
	}
	else {
	 do {
		cout << "Enter integer nr. " << i << ": ";
		cin >> number;
		sum_k += number; i++;
	    } while (i <= k);
	      cout << " The total sum of " << k << " integers is: " << sum_k;
	}
	return 0;
}
