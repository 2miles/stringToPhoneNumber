
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

	char letter = 'Z';             //input char.  Z' so that its not '#'
	int num = 99;				   //associated integer 'num' for the input char.
	int digit = 99;				   //corisponding phone button 'digit'
	

							// PROMPT
	cout << "This program converts any uppercase letter \n"
		<< "to its corisponding place in the alphebet.\n\n"
	   	<< "Press # to quit\n"
	    << "Enter a letter: \n"; 
	
							// WHILE LOOP
	while (true) {
		
		

		cin.get(letter);			//get a single char (incl. wh.sp.)
					
		//if # pressd. exits the while loop and ends program
		
		
		//convert ASCII to alphabt nums
		num = static_cast<int>(letter) - static_cast<int>('A'); 
						

		//if you entered a upercase letter, get the digit
		if (0 <= num && num < 26) {
			digit = (num / 3) + 2;

			if (((num / 3 == 6) || (num / 3 == 7)) && (num % 3 == 0)) {
				digit = digit - 1;
			}
			if (digit > 9) {
				digit = 9;
			}
		}
		else if (letter == '#') {
			break;
		}
		else {
			cin.ignore();
		}

						//OUTPUT RESULTS
		cout << digit << endl;
		cout << endl;
		
		
		

	}


	system("PAUSE");
	return 0;
}

