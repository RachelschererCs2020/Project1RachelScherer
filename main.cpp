#include <iostream>
using namespace std;
int main() {

    // variables for exchange rates
    double mexicoRate = 18.8018;
    double gBRate = 0.76792;
    double germanyRate = 0.89869;
    double canadaRate = 1.30602;
    double indiaRate = 70.8729;
    double australiaRate = 1.44838;
    string type;


    // user input variables
    int countryPick;
    double amount, beforeFine, finalAmount, fine, amountDue;





    // beginning table
    cout << "Welcome to SMU's FX calculator!!" << endl;
    cout << endl;
    cout << " Chose a country you would like to send to:" << endl;
    cout << " 1. Germany (EUR)" << endl;
    cout << " 2. Great Britain (GBP)" << endl;
    cout << " 3. Canada (CAD)" << endl;
    cout << " 4. India (INR)" << endl;
    cout << " 5. Mexico (MXN)" << endl;
    cout << " 6. Australia (AUD)" << endl;
    cout << " 0. Quit" << endl;
    cout << " Please enter a selection (0-6)" << endl;

    //user input
    cin >> countryPick;

    cout << "Please enter amount you would like to covert in USD" << endl;
    cin >> amount;
    while ( countryPick != 0) {
    // if loop to determine the fine
    if (amount > 1 && amount < 500)
        fine = 4.99;
    else if (amount > 500 && amount < 1000)
        fine = 8.99;
    else if (amount > 1000)
        fine = 14.99;

    //amountDue = amount + fine;
    cout << "Your fine is " << fine << endl;


    // loops to convert amount of money using if else statement

    if (countryPick == 1) {
        finalAmount = amount * germanyRate + fine;
        type = "EUR";
    } else if (countryPick == 2) {
        finalAmount = amount * gBRate + fine;
        type = "GBP";
    } else if (countryPick == 3) {
        finalAmount = amount * canadaRate + fine;
        type = "CAD";
    } else if (countryPick == 4) {
        finalAmount = amount * indiaRate + fine;
        type = "INR";
    } else if (countryPick == 5) {
        finalAmount = amount * mexicoRate + fine;
        type = "MXN";
    } else if (countryPick == 6) {
        finalAmount = amount * australiaRate + fine;
        type = "AUD";
    }

    cout << "Here is your quote!" << endl;
    cout << "Amount due at checkout $" << amountDue << endl;
    cout << "Amount Received " << finalAmount << " " << type << endl;


    cout << "Welcome to SMU's FX calculator!!" << endl;
    cout << endl;
    cout << " Chose a country you would like to send to:" << endl;
    cout << " 1. Germany (EUR)" << endl;
    cout << " 2. Great Britain (GBP)" << endl;
    cout << " 3. Canada (CAD)" << endl;
    cout << " 4. India (INR)" << endl;
    cout << " 5. Mexico (MXN)" << endl;
    cout << " 6. Australia (AUD)" << endl;
    cout << " 0. Quit" << endl;
    cout << " Please enter a selection (0-6)" << endl;

    //user input
    cin >> countryPick;

    cout << "Please enter amount you would like to covert in USD" << endl;
    cin >> amount;
}
        cout << "Thank you for using SMU's FX currency exchange, your program is now terminated" << endl;



    cout << "Here is your quote!" << endl;
    cout << "Amount due at checkout $" << amountDue << endl;
    cout << "Amount Received " << finalAmount << " " << type << endl;






    return 0;
}
