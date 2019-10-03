#include <iostream>
using namespace std;

int main()
{
	int userInput = 0;
	int sum = 0;

	while (true) // Infinite loop!
	{

		cout << "Enter a positive int that will be added together. Type -1 to exit." << endl;
		cin >> userInput;
		if (userInput == -1)
		{
			break;
		}
		sum = sum + userInput; // sum += userInput
		cout << "Your added value is: " << sum << endl;
	}

	cout << "\nThats all folks!\n";
	system("pause");
	return 0;
}