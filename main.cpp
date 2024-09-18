#include <iostream>
using namespace std;


class Units {
public:
	string metres, kilometres, miles;
	
};

int main() {

	
	Units f_units;
	f_units.metres = "metres"; f_units.kilometres = "kilometres"; f_units.miles = "miles";
	cout << "Select Unit |" << "type m for (metres) |" << "type km for (kilometres) |" << "type mi for (miles) :";
	string chosen_unit1;
	cin >> chosen_unit1;
	
	cout << "Enter value:"; double chosen_value1;
	cin >> chosen_value1;
	cout << "Conversion unit |" << "type m for (metres) |" << "type km for (kilometres) |" << "type mi for (miles) :";
	string conversion_unit1;
	cin >> conversion_unit1;
	double answer;

	//combinations
	if (chosen_unit1 == conversion_unit1) {
		answer = chosen_value1;
		if (chosen_unit1 == "m") {
			
			cout << chosen_value1 <<" " << f_units.metres;
		}
		else if (chosen_unit1 == "km") {
			cout << chosen_value1 << " " << f_units.kilometres;
		}
		else {
			cout << chosen_value1 << " " << f_units.miles;
		}
	}
	if (chosen_unit1 == "m") {
		if (conversion_unit1 == "km") {
			cout << (chosen_value1 / 1000) << " " << f_units.kilometres;
		}
		else if (conversion_unit1 == "mi") {
			cout << (answer / 1609) << " " << f_units.kilometres;

	}

	}
	if (chosen_unit1 == "km") {
		if (conversion_unit1 == "m") {
			cout << (chosen_value1 * 1000) << " " << f_units.metres;

		}
		else { // conversion unit is miles
			cout << (chosen_value1 /1.609) << " " << f_units.metres;
		}

	}
	if (chosen_unit1 == "mi") {
		if (conversion_unit1 == "m") {
			cout << (chosen_value1 * 1609) << " " << f_units.metres;

		}
		else {
			cout << (chosen_value1 * 1.609) << " " << f_units.kilometres;

		}
	}


	return 0;
}