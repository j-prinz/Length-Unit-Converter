#include "pch.h"
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

void Conversions(string unit_type_a, string unit_type_b, double measurement)
{
	if (unit_type_a == "m" || unit_type_a == "meter" || unit_type_a == "metre")
	{
		// m conversions
		if (unit_type_b == "m" || unit_type_b == "meter" || unit_type_b == "metre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement << "m";

		}
		else if (unit_type_b == "km" || unit_type_b == "kilometer" ||
			unit_type_b == "kilometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1000 << "km";

		}
		else if (unit_type_b == "cm" || unit_type_b == "centimeter" ||
			unit_type_b == "centimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 100 << "cm";

		}
		else if (unit_type_b == "mm" || unit_type_b == "millimeter" ||
			unit_type_b == "millimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1000 << "mm";

		}
		else if (unit_type_b == "micrometre" || unit_type_b == "micrometer")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1e+6 << " micrometers";

		}
		else if (unit_type_b == "nm" || unit_type_b == "nanometer" ||
			unit_type_b == "nanometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1e+9 << "nm";

		}
		else if (unit_type_b == "mi" || unit_type_b == "mile" || 
			unit_type_b == "miles")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1609.344 << "mi";

		}
		else if (unit_type_b == "yd" || unit_type_b == "yard")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1.094 << "yds";

		}
		else if (unit_type_b == "in" || unit_type_b == "inch")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 39.37 << "in";

		}
		else if (unit_type_b == "ft" || unit_type_b == "feet" ||
			unit_type_b == "foot")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 3.281 << "ft";

		}
	}
	// km conversions
	else if (unit_type_a == "km" || unit_type_a == "kilometer" ||
		unit_type_a == "kilometre")
	{
		if (unit_type_b == "m" || unit_type_b == "meter" || unit_type_b == "metre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1000 << "m";

		}
		else if (unit_type_b == "km" || unit_type_b == "kilometer" ||
			unit_type_b == "kilometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement << "km";

		}
		else if (unit_type_b == "cm" || unit_type_b == "centimeter" ||
			unit_type_b == "centimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 100000 << "cm";

		}
		else if (unit_type_b == "mm" || unit_type_b == "millimeter" ||
			unit_type_b == "millimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1e+6 << "mm";

		}
		else if (unit_type_b == "micrometre" || unit_type_b == "micrometer")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1e+9 << " micrometers";

		}
		else if (unit_type_b == "nm" || unit_type_b == "nanometer" ||
			unit_type_b == "nanometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1e+12 << "nm";

		}
		else if (unit_type_b == "mi" || unit_type_b == "mile" || 
			unit_type_b == "miles")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1.609 << "mi";

		}
		else if (unit_type_b == "yd" || unit_type_b == "yard")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1093.613 << "yds";

		}
		else if (unit_type_b == "in" || unit_type_b == "inch")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 39370.079 << "in";

		}
		else if (unit_type_b == "ft" || unit_type_b == "feet" ||
			unit_type_b == "foot")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 3280.84 << "ft";

		}
	}
	// cm conversions
	else if (unit_type_a == "cm" || unit_type_a == "centimeter" ||
		unit_type_a == "centimetre")
	{
		if (unit_type_b == "m" || unit_type_b == "meter" || unit_type_b == "metre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 100 << "m";

		}
		else if (unit_type_b == "km" || unit_type_b == "kilometer" ||
			unit_type_b == "kilometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 100000 << "km";

		}
		else if (unit_type_b == "cm" || unit_type_b == "centimeter" ||
			unit_type_b == "centimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement << "cm";

		}
		else if (unit_type_b == "mm" || unit_type_b == "millimeter" ||
			unit_type_b == "millimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 10 << "mm";

		}
		else if (unit_type_b == "micrometre" || unit_type_b == "micrometer")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 10000 << " micrometers";

		}
		else if (unit_type_b == "nm" || unit_type_b == "nanometer" ||
			unit_type_b == "nanometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1e+7 << "nm";

		}
		else if (unit_type_b == "mi" || unit_type_b == "mile" || 
			unit_type_b == "miles")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 160934.4 << "mi";

		}
		else if (unit_type_b == "yd" || unit_type_b == "yard")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 91.44 << "yds";

		}
		else if (unit_type_b == "in" || unit_type_b == "inch")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 2.54 << "in";

		}
		else if (unit_type_b == "ft" || unit_type_b == "feet" ||
			unit_type_b == "foot")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 30.48 << "ft";

		}
	}
	// mm conversions
	else if (unit_type_a == "mm" || unit_type_a == "millimeter" ||
		unit_type_a == "millimetre")
	{
		if (unit_type_b == "m" || unit_type_b == "meter" || unit_type_b == "metre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1000 << "m";

		}
		else if (unit_type_b == "km" || unit_type_b == "kilometer" ||
			unit_type_b == "kilometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1e+6 << "km";

		}
		else if (unit_type_b == "cm" || unit_type_b == "centimeter" ||
			unit_type_b == "centimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 10 << "cm";

		}
		else if (unit_type_b == "mm" || unit_type_b == "millimeter" ||
			unit_type_b == "millimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement << "mm";

		}
		else if (unit_type_b == "micrometre" || unit_type_b == "micrometer")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1000 << " micrometers";

		}
		else if (unit_type_b == "nm" || unit_type_b == "nanometer" ||
			unit_type_b == "nanometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1e+6 << "nm";

		}
		else if (unit_type_b == "mi" || unit_type_b == "mile" || 
			unit_type_b == "miles")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1.609e+6 << "mi";

		}
		else if (unit_type_b == "yd" || unit_type_b == "yard")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 914.4 << "yds";

		}
		else if (unit_type_b == "in" || unit_type_b == "inch")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 25.4 << "in";

		}
		else if (unit_type_b == "ft" || unit_type_b == "feet" ||
			unit_type_b == "foot")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 304.8 << "ft";

		}
	}
	// micrometer conversions
	else if (unit_type_a == "micrometer" || unit_type_a == "micrometre")
	{
		if (unit_type_b == "m" || unit_type_b == "meter" || unit_type_b == "metre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1e+6 << "m";

		}
		else if (unit_type_b == "km" || unit_type_b == "kilometer" ||
			unit_type_b == "kilometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1e+9 << "km";

		}
		else if (unit_type_b == "cm" || unit_type_b == "centimeter" ||
			unit_type_b == "centimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 10000 << "cm";

		}
		else if (unit_type_b == "mm" || unit_type_b == "millimeter" ||
			unit_type_b == "millimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1000 << "mm";

		}
		else if (unit_type_b == "micrometre" || unit_type_b == "micrometer")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement << " micrometers";

		}
		else if (unit_type_b == "nm" || unit_type_b == "nanometer" ||
			unit_type_b == "nanometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1000 << "nm";

		}
		else if (unit_type_b == "mi" || unit_type_b == "mile" || 
			unit_type_b == "miles")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1.609e+9 << "mi";
		}
		else if (unit_type_b == "yd" || unit_type_b == "yard")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 914400 << "yds";

		}
		else if (unit_type_b == "in" || unit_type_b == "inch")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 25400 << "in";

		}
		else if (unit_type_b == "ft" || unit_type_b == "feet" ||
			unit_type_b == "foot")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 304800 << "ft";

		}
	}
	// nanometer conversions
	else if (unit_type_a == "nm" || unit_type_a == "nanometer" ||
		unit_type_a == "nanometre")
	{
		if (unit_type_b == "m" || unit_type_b == "meter" || unit_type_b == "metre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1e+9 << "m";

		}
		else if (unit_type_b == "km" || unit_type_b == "kilometer" ||
			unit_type_b == "kilometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1e+12 << "km";

		}
		else if (unit_type_b == "cm" || unit_type_b == "centimeter" ||
			unit_type_b == "centimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1e+7 << "cm";

		}
		else if (unit_type_b == "mm" || unit_type_b == "millimeter" ||
			unit_type_b == "millimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1e+6 << "mm";

		}
		else if (unit_type_b == "micrometre" || unit_type_b == "micrometer")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1000 << " micrometers";

		}
		else if (unit_type_b == "nm" || unit_type_b == "nanometer" ||
			unit_type_b == "nanometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement << "nm";

		}
		else if (unit_type_b == "mi" || unit_type_b == "mile" || 
			unit_type_b == "miles")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1.609e+12 << "mi";

		}
		else if (unit_type_b == "yd" || unit_type_b == "yard")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 9.144e+8 << "yds";

		}
		else if (unit_type_b == "in" || unit_type_b == "inch")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 2.54e+7 << "in";

		}
		else if (unit_type_b == "ft" || unit_type_b == "feet" ||
			unit_type_b == "foot")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 3.048e+8 << "ft";

		}
	}
	// mile conversions
	else if (unit_type_a == "mi" || unit_type_a == "mile" ||
		unit_type_a == "miles")
	{
		if (unit_type_b == "m" || unit_type_b == "meter" || unit_type_b == "metre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1609.344 << "m";

		}
		else if (unit_type_b == "km" || unit_type_b == "kilometer" ||
			unit_type_b == "kilometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1.609 << "km";

		}
		else if (unit_type_b == "cm" || unit_type_b == "centimeter" ||
			unit_type_b == "centimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 160934.4 << "cm";

		}
		else if (unit_type_b == "mm" || unit_type_b == "millimeter" ||
			unit_type_b == "millimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1.609e+6 << "mm";

		}
		else if (unit_type_b == "micrometre" || unit_type_b == "micrometer")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1.609e+9 << " micrometers";

		}
		else if (unit_type_b == "nm" || unit_type_b == "nanometer" ||
			unit_type_b == "nanometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1.609e+12 << "nm";

		}
		else if (unit_type_b == "mi" || unit_type_b == "mile" || 
			unit_type_b == "miles")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement << "mi";

		}
		else if (unit_type_b == "yd" || unit_type_b == "yard")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 1760 << "yds";

		}
		else if (unit_type_b == "in" || unit_type_b == "inch")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 63360 << "in";

		}
		else if (unit_type_b == "ft" || unit_type_b == "feet" ||
			unit_type_b == "foot")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 5280 << "ft";

		}
	}
	// yard conversions
	else if (unit_type_a == "yd" || unit_type_a == "yard" ||
		unit_type_a == "yards")
	{
		if (unit_type_b == "m" || unit_type_b == "meter" || unit_type_b == "metre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1.094 << "m";

		}
		else if (unit_type_b == "km" || unit_type_b == "kilometer" ||
			unit_type_b == "kilometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1093.613 << "km";

		}
		else if (unit_type_b == "cm" || unit_type_b == "centimeter" ||
			unit_type_b == "centimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 91.44 << "cm";

		}
		else if (unit_type_b == "mm" || unit_type_b == "millimeter" ||
			unit_type_b == "millimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 914.4 << "mm";

		}
		else if (unit_type_b == "micrometre" || unit_type_b == "micrometer")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 914400 << " micrometers";

		}
		else if (unit_type_b == "nm" || unit_type_b == "nanometer" ||
			unit_type_b == "nanometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 9.144e+8 << "nm";

		}
		else if (unit_type_b == "mi" || unit_type_b == "mile" || 
			unit_type_b == "miles")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 1760 << "mi";

		}
		else if (unit_type_b == "yd" || unit_type_b == "yard")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement << "yds";

		}
		else if (unit_type_b == "in" || unit_type_b == "inch")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 36 << "in";

		}
		else if (unit_type_b == "ft" || unit_type_b == "feet" ||
			unit_type_b == "foot")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 3 << "ft";

		}

	}
	// foot conversions
	else if (unit_type_a == "ft" || unit_type_a == "foot" ||
		unit_type_a == "feet")
	{
		if (unit_type_b == "m" || unit_type_b == "meter" || unit_type_b == "metre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 3.281 << "m";

		}
		else if (unit_type_b == "km" || unit_type_b == "kilometer" ||
			unit_type_b == "kilometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 3280.84 << "km";

		}
		else if (unit_type_b == "cm" || unit_type_b == "centimeter" ||
			unit_type_b == "centimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 30.48 << "cm";

		}
		else if (unit_type_b == "mm" || unit_type_b == "millimeter" ||
			unit_type_b == "millimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 304.8 << "mm";

		}
		else if (unit_type_b == "micrometre" || unit_type_b == "micrometer")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 304800 << " micrometers";

		}
		else if (unit_type_b == "nm" || unit_type_b == "nanometer" ||
			unit_type_b == "nanometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 3.048e+8 << "nm";

		}
		else if (unit_type_b == "mi" || unit_type_b == "mile" || 
			unit_type_b == "miles")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 5280 << "mi";

		}
		else if (unit_type_b == "yd" || unit_type_b == "yard")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 3 << "yds";

		}
		else if (unit_type_b == "in" || unit_type_b == "inch")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 12 << "in";

		}
		else if (unit_type_b == "ft" || unit_type_b == "feet" ||
			unit_type_b == "foot")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement << "ft";

		}
	}
	// inch conversions
	else if (unit_type_a == "in" || unit_type_a == "inch")
	{
		if (unit_type_b == "m" || unit_type_b == "meter" || unit_type_b == "metre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 39.37 << "m";

		}
		else if (unit_type_b == "km" || unit_type_b == "kilometer" ||
			unit_type_b == "kilometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 39370.079 << "km";

		}
		else if (unit_type_b == "cm" || unit_type_b == "centimeter" ||
			unit_type_b == "centimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 2.54 << "cm";

		}
		else if (unit_type_b == "mm" || unit_type_b == "millimeter" ||
			unit_type_b == "millimetre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 25.4 << "mm";

		}
		else if (unit_type_b == "micrometre" || unit_type_b == "micrometer")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 25400 << " micrometers";

		}
		else if (unit_type_b == "nm" || unit_type_b == "nanometer" ||
			unit_type_b == "nanometre")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement * 2.54e+7 << "nm";

		}
		else if (unit_type_b == "mi" || unit_type_b == "mile" || 
			unit_type_b == "miles")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 63360 << "mi";

		}
		else if (unit_type_b == "yd" || unit_type_b == "yard")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 36 << "yds";

		}
		else if (unit_type_b == "in" || unit_type_b == "inch")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement << "in";
		}
		else if (unit_type_b == "ft" || unit_type_b == "feet" ||
			unit_type_b == "foot")
		{
			cout << measurement << unit_type_a << " is approximately " << 
				measurement / 12 << "ft";

		}
	}		
}


int main()
{

	string unit_type_a, unit_type_b;
	double measurement;
	unordered_set<string> type_set{"m", "meter", "metre", "km", 
		"kilometre","kilometer", "cm", "centimeter", "centimetre", "mm", "millimetre", 
		"millimeter", "micrometer", "micrometre", "nm", "nanometer", "nanometre",
		"mi", "mile", "miles", "yd", "yard", "in", "inch", "ft", "foot", "feet"};
	int tries = 4;



	// ask the user what unit to convert to and from
	cout << "Select a length measurement unit to convert from: \n" <<
		"meter, kilometer, centimeter, millimeter, micrometer, nanometer, \n"
		<< "mile, yard, inch, or feet.\n";
	cin >> unit_type_a;

	for (int i = 0; i < tries; i++) {
		if (type_set.find(unit_type_a) != type_set.end()) {
			cout << "Enter measurement:\n";
			cin >> measurement;

			for (int j = 0; j < tries; j++) {
				while (!cin) {
					if (j < tries) {
					cout << "Invalid entry. Please try again.\n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cin >> measurement;
					j++;
					}
					else {
						return 0;
					}
				}
			}

			cout << "Now, select a measurment unit to convert to: \n" <<
				"meter, kilometer, centimeter, millimeter, micrometer, nanometer, \n"
				<< "mile, yard, inch, or feet.\n";
			cin >> unit_type_b;

			for (int i = 0; i < tries; i++) {
				if (type_set.find(unit_type_b) != type_set.end())
				{
					Conversions(unit_type_a, unit_type_b, measurement);
					break;
				}

				else
				{
					if (type_set.find(unit_type_b) == type_set.end() && i < tries) {
						cout << "Invalid entry. Please try again.\n";
						cin >> unit_type_b;
						i++;
					}
					else
					{
						return 0;
					}
				}
					

			}
			break;
		}
		else
		{
			if (type_set.find(unit_type_b) == type_set.end() && i < tries) {
				cout << "Invalid entry. Please try again.\n";
				cin >> unit_type_a;
				i++;
			}
			else
			{
				return 0;
			}
		}
			

	}


	return 0;
}

