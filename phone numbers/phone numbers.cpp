
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

	char letter = 'Z';
	int num = 99;
	int digit = 99;
	


	cout << "This program converts any uppercase letter \n"
		<< "to its corisponding place in the alphebet.\n\n"
	   	<< "Press # to quit\n"
	    << "Enter a letter: \n"; 
	
	
	while (true) {
		
		

		cin.get(letter);
		cin.ignore(100, '\n');
		cout << "You entered the letter: " << letter << endl;



		num = static_cast<int>(letter) - static_cast<int>('A');

		if (0 <= num && num < 26) {
			digit = (num / 3) + 2;

			if (((num / 3 == 6) || (num / 3 == 7)) && (num % 3 == 0)) {
				digit = digit - 1;
			}

			if (digit > 9) {
				digit = 9;
			}

		}
		else {
			cout << "Invalid input. ";
		}


		cout << "corrispondi teleph digit: " << digit << endl;
		cout << endl;
		
	
	}


	system("PAUSE");
	return 0;
}

