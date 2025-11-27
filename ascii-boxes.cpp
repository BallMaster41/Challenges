#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (true)
	{
		string sentence;
		cout << "Enter text: ";
		getline(cin, sentence);

		if (sentence.empty()) {
			cerr << "Please input something\n";
			continue;
		}

		// Build the lines inbetween the characters
		string tab = "|";
		
		for (char c : sentence) {
			tab += " ";
			tab += c;
			tab += " |";
		}

		// Build the border of the box
		string border;
		char alternate = '-';

		for (char c : tab) {
			if (c == '|') {
				border += "+";
			}

			else {
				border += alternate;
				alternate = (alternate == '-') ? '=' : '-';
			}
		}

		// Output
		cout << border << "\n";
		cout << tab << "\n";
		cout << border << "\n";

	}

}