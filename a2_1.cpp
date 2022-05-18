/*This programs asks the user for an amount of money entered in cents.
Then it tells the user how to make change (using the fewest coins) using
quarters, dimes, nickels, and pennies. */

//author: Kristy Gao

#include <iostream>
using namespace std;
const int PENNIES_VALUE = 1;
const int NICKELS_VALUE = 5;
const int DIMES_VALUE = 10;
const int QUARTERS_VALUE = 25;

int main() {
  int numberCents;
  cout << "enter number of cents: " << endl;
  cin >> numberCents;
  int numberQuarters = numberCents/QUARTERS_VALUE;
  int remainingCents = numberCents%QUARTERS_VALUE;
  int numberDimes = remainingCents/DIMES_VALUE;
  remainingCents = remainingCents%DIMES_VALUE;
  int numberNickels = remainingCents/NICKELS_VALUE;
  int numberPennies = remainingCents%NICKELS_VALUE;
  cout << "pennies: " << numberPennies << endl;
  cout << "nickles: " << numberNickels << endl;
  cout << "dimes: " << numberDimes << endl;
  cout << "quarters: " << numberQuarters << endl;
}
