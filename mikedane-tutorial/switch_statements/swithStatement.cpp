#include <iostream>

using namespace std;

string getDayOfTheWeek(int dayNum);

int main()
{
	cout << getDayOfTheWeek(0) << endl;
}

string getDayOfTheWeek(int dayNum){
	string dayName;

	switch(dayNum){
		case 0:
			dayName = "Sunday";
			break;
		case 1:
			dayName = "Monday";
			break;
		case 2:
			dayName = "Tuesday";
			break;
		case 3:
			dayName = "Wednesday";
			break;
		case 4:
			dayName = "Thursday";
			break;
		case 5:
			dayName = "Friday";
			break;
		case 6:
			dayName = "Saturday";
			break;
		default:
			dayName = "Invalid day number";
	}

	return dayName;
}
