// printer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <ctime>

#include <stdio.h>
using namespace std;


int main() {
	int money{233456};
	string username, password, un, pw;


	cout << "please log-in" << endl;
	cout << "type in your username " << endl;
	cin >> username;

	cout << "please type in your password " << endl;
	cin >> password;



	cout << "do you want to log in  [Y/N]" << endl;
	char response1{};
	cin >> response1;
	bool verification{};


	if (response1 == 'y') {
		cout << "type in your username " << endl;
		cin >> un;
		cout  << "type in your password " << endl;
		cin >> pw;
		if (un == username && pw == password) {
			bool verification = true;
			cout << "log - in succesful " << endl;
		}
		else {

			bool verification = false;
			cout << "log in failed " << endl;
		}

	}
	else if (response1 == 'n') {


		return 1;

	}
	string color{};
	string brand{};
	int number_of_miles{};
	int number_of_seats{};

	if (verification = true) {

		cout << "welcome to the car registration service please type in the details of the car you want  " << endl;

		cout << "colour " << endl;

		cin >> color;

		cout << "brand of the car " << endl;
		cin >> brand;

		cout << "miles you expect to travel " << endl;
		cin >> number_of_miles;

		cout << "number of seats " << endl;
		cin >> number_of_seats;

}



	int fare = (6 * number_of_miles) / number_of_seats + 48; 
	if (money > fare) {
		money = money - fare;
		cout << "new balance " << money << endl;
		time_t now = time(0);
		char* dt = ctime(&now);

		cout << "brand : " << brand <<  " '\n 'color :  " << color <<  " '\n ' number of miles  : " << number_of_miles << "  '\n 'number of seats " << number_of_seats << endl;
		cout << "registered by : " << username << "  -- at  " << dt << endl;

	}
	else if (money < fare) {

		cout << "you don't have enough " << endl;
		return 2;
	}

}