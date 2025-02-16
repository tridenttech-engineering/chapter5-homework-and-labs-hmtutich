//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double discountRate=0.10;
	const double discountRate2=0.05;
	const double shippingRate1=0.99;
	const double shippingRate2=4.99;
	double amountOwed=0.0;
	char memberStatus=' ';

	cout << "Enter amount owed before discount and shipping: ";
	cin >> amountOwed;
	cout << "Premier Club Member (Y/N)? ";
	cin >> memberStatus;

	if (toupper(memberStatus)=='Y'){
			amountOwed = amountOwed - (amountOwed * discountRate);
	}	
	else {
		amountOwed = amountOwed - (amountOwed * discountRate2);
	}
	if (amountOwed >= 100.0){
			amountOwed = amountOwed + shippingRate1;
	}
		else{
			amountOwed = amountOwed + shippingRate2;
		}
		cout << "Amount owed after discount and shipping: $" << fixed << setprecision(2) << amountOwed << endl;
	return 0;
}	//end of main function