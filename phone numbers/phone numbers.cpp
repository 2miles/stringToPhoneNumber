
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

	char letter;
	int num = 0;
	int digit = 0;
	
	cout << "This program converts any uppercase letter \n"
		 << "to its corisponding place in the alphebet.\n\n"
	     << "Enter a letter: \n"; 
	cin.get(letter);
	cout << "You entered the letter: " << letter << endl;
	
	
	num = static_cast<int>(letter) - static_cast<int>('A');
	
	
	cout << "The corrisponding alphabet number is: " << num << endl;
	cout << endl;



	system("PAUSE");
	return 0;
}

