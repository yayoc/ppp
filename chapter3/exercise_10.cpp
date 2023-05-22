#include "std_lib_facilities.h"

int main()
{
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int half_dollers = 0;
    int one_dallers = 0;

    cin >> pennies >> nickels >> dimes >> quarters >> half_dollers >> one_dallers;

	if (pennies == 1) {
		cout << "You have " << pennies << " penny.\n";
	} else {
		cout << "You have " << pennies << " pennies.\n";
	}

	if (nickels == 1) {
		cout << "You have " << nickels << " nickel.\n";
	} else {
		cout << "You have " << nickels << " nickels.\n";
	}

	if (dimes == 1) {
		cout << "You have " << dimes << " dime.\n";
	} else {
		cout << "You have " << dimes << " dimes.\n";
	}

	if (quarters == 1) {
		cout << "You have " << quarters << " quarter.\n";
	} else {
		cout << "You have " << quarters << " quarters.\n";
	}

	if (half_dollers == 1) {
		cout << "You have " << half_dollers << " half-doller.\n";
	} else {
		cout << "You have " << half_dollers << " half-dollers.\n";
	}

	if (one_dallers == 1) {
		cout << "You have " << one_dallers << " one-doller.\n";
	} else {
		cout << "You have " << one_dallers << " one-dollers.\n";
	}

	int total = pennies + nickels * 5 + dimes * 10 + quarters * 25 + half_dollers * 50 + one_dallers * 100; 
	cout << "The value of all of your coins is " << total << " cents.\n";

    return 0;
}
