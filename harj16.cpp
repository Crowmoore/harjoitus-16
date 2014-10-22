#include <iostream>
#include <string>
#include <sstream>
using namespace std;



struct userInfo
{
	string firstnames;
	string lastname;
	float distance;
	string address;
	int shoesize;
	string zipcode;

};

void clearConsole();
string getUserInputString();
int getUserInputInteger();
float getUserInputFloat();
void printUser(userInfo);
userInfo getUser();

int main()
{
	struct userInfo user;

	user = getUser();
	printUser(user);


	return(0);
}

userInfo getUser()
{
	struct userInfo user;

	cout << "Your first name(s): ";
	user.firstnames = getUserInputString();
	clearConsole();
	cout << "Your last name: ";
	user.lastname = getUserInputString();
	clearConsole();
	cout << "Your address: ";
	user.address = getUserInputString();
	clearConsole();
	cout << "Your zipcode: ";
	user.zipcode = getUserInputString();
	clearConsole();
	cout << "Distance from home to school: ";
	user.distance = getUserInputFloat();
	clearConsole();
	cout << "Your shoesize: ";
	user.shoesize = getUserInputInteger();
	clearConsole();

	return user;
}

void printUser(userInfo user)
{
	cout << "Name: " << user.firstnames << " " << user.lastname << endl;
	cout << "Address: " << user.address << endl;
	cout << "Zipcode: " << user.zipcode << endl;
	cout << "Distance to school: " << user.distance << endl;
	cout << "Shoesize: " << user.shoesize << endl;
}

void clearConsole()
{
	system("cls");
}

string getUserInputString()
{
	string userString;
	getline(cin, userString);
	return userString;
}

int getUserInputInteger()
{
	int userInt;
	cin >> userInt;
	return userInt;
}

float getUserInputFloat()
{
	float userFloat;
	cin >> userFloat;
	return userFloat;
}