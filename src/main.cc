/*
 * main.cc
 *
 *  Created on: 14 Jul 2018
 *      Author: ajit
 */



#include <iostream>
using namespace std;

int main() {

	// Say HelloWorld five times
	for (int index = 0; index < 5; ++index)
		cout << "HelloWorld!" << endl;
	char input = 'i';
	cout << "To exit, press 'm' then the 'Enter' key." << endl;
	cin >> input;

	while (input != 'm') {
		cout << "You just entered '" << input << "'."
				<< "You need to enter 'm' to exit." << endl;
		cin >> input;
	}

	cout << "Exiting!" << endl;
	return 0;
}
