//Jonathan Lawrence
//CIS 251 Exercise Club
/*Create a program that calculates the cost of an exercise club membership
based upon the length of membership as provided by the user */


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Constants
	double COST_PER_MONTH = 25.00; //dollars
	double COST_OVER_TWELVE_MONTHS = 22.00; //dollars


    //Variables
	int months;
	double totalMembershipCost;
	double membershipOverTwelveMonths;
	double monthlyPayment;

	//Get Input
	cout << " Enter length of membership (in months): ";
	cin >> months;


	//Calculate membership cost if over 12 months
	if (months > 12)
	{
		monthlyPayment = COST_OVER_TWELVE_MONTHS;
	}
	else
	{
		monthlyPayment = COST_PER_MONTH;

	}//End If

	totalMembershipCost = double(months) * monthlyPayment;



	 //Output
	cout << endl << endl << endl << " Jonathan Lawrence" << endl << endl << endl;
	cout << setw(26) << left << " Membership Length: " << months << " Months" << endl;
	cout << setw(26) << left << " charge per month: " << fixed << setprecision(2) << "$" << monthlyPayment << endl;
	cout << setw(26) << left << " Total Bill: "  << "$" << totalMembershipCost << endl << endl << endl;

}//End Main
