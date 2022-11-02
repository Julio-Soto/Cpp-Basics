#include <iostream>

using namespace std;

int main() {
    const double pi = 3.14;
    int file_size = 0;
    double sales = 9.99;
    bool isActive = true;
    char char01 = 'p';
    float number = 4.56;
    double x = 5, y = 3;
    double z = 7.57;

    // OPERATIONS //
    int test_sum = x + z; // The int variable will discard the decimals - NO ERROR
    double test_division = x / 3; // The division of 2 int vars will result in an integer.
    y = ++x; // ++ prefix. Increment happens before assigment.
    y = x++; // ++ postfix. Increment happens after the assigment.
    x = 10, y = 5;
    z = (x + 10) / (3 * y); // order of operations () then  / and *  then  + and -

    sales = 95000;
    double const state_tax_rate = 0.04;
    double  const county_tax_rate = 0.02;
    double state_tax = sales * state_tax_rate;
    double  county_tax = sales * county_tax_rate;
    double  total_tax = state_tax + county_tax;

    cout << "Sales: $" << sales << endl
         << "State Tax: $" << state_tax << endl
         << "County Tax: $" << county_tax << endl
         << "Total Tax: $" << total_tax << endl;

    return 0;
}
