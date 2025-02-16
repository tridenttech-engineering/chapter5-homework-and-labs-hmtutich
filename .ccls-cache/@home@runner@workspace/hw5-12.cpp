//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
double item1 = 0.0;
double item2 = 0.0;
const double Discount = 0.5;
double total = 0.0;

cout << "Enter price of item 1: ";
cin >> item1;
cout << "Enter price of item 2: ";
cin >> item2;
if (item1 < item2) {
	item1 = item1 -(item1*Discount);
}
	else if (item2 < item1) {
		item2 = item2 -(item2*Discount);
	}
	else{
		item2=item2*Discount;
	}
	total = item1 + item2;
	cout << fixed << setprecision(2);
	cout << "Total: $" << total << endl;
	return 0;
}	//end of main function